(defun asdf123()
  (interactive)
  (setq spisNeperev nil)
  (setq s '"en")
  (setq tt '"ru")
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (setq ishodstroka (buffer-substring-no-properties nashalus konetus)) ;в этом символе будет исходная строка
  (save-excursion; сохраняем точку метку и буффер
    (set-buffer "*scratch*"); активизируем скратч буффер
    (erase-buffer); очищаем его полностью
    (insert ishodstroka); вставляем нашу неизмененную строку
    (goto-char 1); переходим в начало буффера
    (нетНСnew); заменяем переводы строки на пробелы
    (goto-char 1)
    (zamenaOtmetok)
    (убратьЛишниеПробелы)
    (mark-whole-buffer)
    (setq odnastroka (buffer-substring-no-properties (region-beginning) (region-end)))
    (setq odnastroka (google-translate-json-translation (google-translate-request s
										  tt
										  odnastroka)))
    (mark-whole-buffer)
    (delete-region (region-beginning) (region-end))
    (insert odnastroka)
    (zamenaOBJ)
    (mark-whole-buffer)
    (kill-new (buffer-substring-no-properties (region-beginning) (region-end)) 't)
    )
  (delete-region nashalus konetus)
  (yank)
  )

(defun нетНСnew ()
  "Весь текст в одну строку"
  (goto-char 1)  
  (while (re-search-forward "\n" nil t)
    (replace-match " "))
  )

(defun zamenaOtmetok()
  "Заменить все пометки на obj и сохранить непереводимый текст в ассоциативный список"
  (setq nach 0)
  (setq numobj 0)
  (setq assspisobj (list))
  (while (re-search-forward "##@" nil t 1)
    (setq nach (- (point) 3))
    (if (search-forward "@##" nil t 1)
	(progn
	  (setq nameobj (concat "obj" (number-to-string numobj)))
	  (setq assspisobj (cons
			    (cons nameobj
				  (buffer-substring-no-properties (+ nach 3) (- (point) 3))) assspisobj))
		       (delete-region nach (point))
	       (insert nameobj)
	       (setq numobj (+ numobj 1))
	       (setq nach 0)
	       )
      )
    )
)


(defun Otmetit()
  "Отметить непереводимые символы"
  (interactive)
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (setq ishodstroka (buffer-substring-no-properties nashalus konetus))
  (delete-region nashalus konetus)
  (setq ishodstroka (concat "##@" ishodstroka "@##"))
  (insert ishodstroka)
  )
(defun убратьЛишниеПробелы ()
  "Удалить сдвоенные пробелы"
  (goto-char 1)  
  (while (re-search-forward " \\( \\)+" nil t)
    (replace-match " "))
  )
(defun zamenaOBJ()
  "Зменить obj оригиналом"
  (goto-char 1)  
  (while (re-search-forward "obj\\([[:digit:]]\\)+" nil t 1)
    (replace-match (cdr (assoc (match-string 0) assspisobj)))))
