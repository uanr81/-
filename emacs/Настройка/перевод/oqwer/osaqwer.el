(defun saqwer32 ()
  (interactive)
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
(нетНС); заменяем переводы строки на пробелы
(goto-char 1)
(setq spisok (bloq1 "*@[[:alpha:]]+{@*[[:alpha:] ]*@*{*@*[[:alpha:] ]*}*}'*\\|@samp{+.*[[:alpha:] 
,@{}-]\.*}*\\|@+[[:alpha:]]+" "нечто" )) 
(re-search-forward "@" nil t 1))
(match-data)
(setq bloq nil)
(while (re-search-forward "`*@[[:alpha:]]+{@*[[:alpha:] ]*@*{*@*[[:alpha:] ]*}*}'*\\|@samp{+.*[[:alpha:] 
,@{}-]\.*}*\\|@+[[:alpha:]]+" nil t)
(progn (cons (match-data) blog )))
      ; (progn (cons (match-data) blog )(replace-match "kadabra")))
(regexp-quote "@samp{In Texinfo, @@@@-commands are @@dfn@{mark-up@} commands.}") 
  ;(re-search-forward "@[[:alpha:]]+{.+}" nil t 1); находит @команды без перевода строки
;eobp; окончание буффера
;(prog1 (car x) (setq x (cdr x))); удаляет первый элемент списка и возвращает его  
;(string (following-char))
;))    
;;(save-excursion (kill-new (google-translate-json-translation (google-translate-request s tt ishodstroka)) 't)
;;		  )(delete-region nashalus konetus)(yank)
))
(re-search-forward "@[[:alpha:]]+{.+}" nil t 1)
(defun марк-команд ()
"Выделяет непереводимый текст "
(setq нач-фрагм (point))
(while ()()))

(defun валимДальше ()
"Если не конец буфера двигает точку вперед на один символ, возвращает номер символа или nil иначе"
(if (not (eobp))
(progn (forward-char)
(point))
nil))

(defun нетНС ()
  "Весь текст в одну строку"
  (goto-char 1)  
  (while (re-search-forward "\n" nil t)
    (replace-match " "))
  )
(defun bloq1 (regexp repl)
  "Загнать в список соответствия REGEXP заменив их на REPL"
  (interactive "s\ns")
  (setq bloq ())
  (let ((message-log-max t)) 
    (while (re-search-forward regexp nil t)
      (progn (setq bloq (cons (buffer-substring-no-properties (car (match-data)) (car (cdr (match-data)))) 'bloq))
       (replace-match repl)) 
      )
    )
  bloq)

(defun asaqwer32 ()
  (interactive)
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
(нетНС); заменяем переводы строки на пробелы
(goto-char 1)
(setq spisok (bloq1 "*@[[:alpha:]]+{@*[[:alpha:] ]*@*{*@*[[:alpha:] ]*}*}'*\\|@samp{+.*[[:alpha:] 
,@{}-]\.*}*\\|@+[[:alpha:]]+" "нечто" )) 
))
