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
eobp; окончание буффера
(prog1 (car x) (setq x (cdr x))); удаляет первый элемент списка и возвращает его  
(string (following-char))
))    
;;(save-excursion (kill-new (google-translate-json-translation (google-translate-request s tt ishodstroka)) 't)
;;		  )(delete-region nashalus konetus)(yank)

(defun марк-команд ()
"Выделяет непереводимый текст "
(setq нач-фрагм (point)))
(while ()())
