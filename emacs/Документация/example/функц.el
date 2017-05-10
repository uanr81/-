(defun function-called-at-point ()
  "Возвращает функцию вокруг точки или вызывается списком, содержащим точку.
Если это не дает функции, вернуть nil."
  (with-syntax-table emacs-lisp-mode-syntax-table
;(with-syntax-table TABLE &rest BODY)
;Оцените BODY с таблицей синтаксиса текущего буфера, установленным в TABLE.
;Таблица синтаксиса текущего буфера сохраняется, BODY вычисляется, и
;Сохраненная таблица восстанавливается даже в случае ненормального выхода.
;Значение возвращает BODY
    (or (condition-case ()
;(condition-case VAR BODYFORM &rest HANDLERS)
;Восстановить контроль, когда сообщается об ошибке.
;Выполняет BODYFORM и возвращает его значение, если не происходит ошибка.
;Каждый элемент HANDLERS имеет вид (CONDITION-NAME BODY ...)
;Где BODY состоит из выражений Lisp.
;Обработчик применим к ошибке
;Если CONDITION-NAME является одним из имен условий ошибки.
;Если происходит ошибка, запускается первый соответствующий обработчик.

;Автомобиль обработчика может быть списком имен условий вместо
;Одиночное имя условия; То он обрабатывает их все. Если специальные
;Имя условия `debug 'присутствует в этом списке, оно позволяет другому
;Условие в списке для запуска отладчика, если `debug-on-error 'и
;Другие обычные механизмы говорят, что он должен (иначе "condition-case"
;Подавляет отладчик).
;Когда обработчик обрабатывает ошибку, управление возвращается к `condition-case '
;И он выполняет BODY обработчика ...
;С VAR, связанным с ошибкой (ERROR-SYMBOL. SIGNAL-DATA).
;(Если VAR равен nil, обработчик не может получить доступ к этой информации.)
;Затем значение последней формы BODY возвращается из `condition-case '
;выражение.	    
	    
            (save-excursion
              (or (not (zerop (skip-syntax-backward "_w")))
                  (eq (char-syntax (following-char)) ?w)
                  (eq (char-syntax (following-char)) ?_)
                  (forward-sexp -1))
              (skip-chars-forward "'")
              (let ((obj (read (current-buffer))))
                (and (symbolp obj) (fboundp obj) obj)))
          (error nil))
        (condition-case ()
            (save-excursion
              (save-restriction
                (narrow-to-region (max (point-min)
                                       (- (point) 1000)) (point-max))
                ;; Move up to surrounding paren, then after the open.
                (backward-up-list 1)
                (forward-char 1)
                ;; If there is space here, this is probably something
                ;; other than a real Lisp function call, so ignore it.
                (if (looking-at "[ \t]")
                    (error "Probably not a Lisp function call"))
                (let ((obj (read (current-buffer))))
                  (and (symbolp obj) (fboundp obj) obj))))
          (error nil))
        (let* ((str (find-tag-default))
               (sym (if str (intern-soft str))))
          (if (and sym (fboundp sym))
              sym
            (save-match-data
              (when (and str (string-match "\\`\\W*\\(.*?\\)\\W*\\'" str))
                (setq sym (intern-soft (match-string 1 str)))
                (and (fboundp sym) sym))))))))
