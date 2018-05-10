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
  (netOTSTUP)
  (нетНС)
  (mark-whole-buffer)
  (setq odnastroka (buffer-substring-no-properties (region-beginning) (region-end)))
  )
(save-excursion (kill-new (google-translate-json-translation (google-translate-request s
                                         tt
					 odnastroka)) 't)
		)
(delete-region nashalus konetus)
(yank)
)
 


(defun нетНС ()
  "Весь текст в одну строку"
  (goto-char 1)  
  (while (re-search-forward "\n" nil t)
    (replace-match " "))
  )
(defun netOTSTUP ()
  "Удалить отступы в начале"
  (goto-char 1)  
  (while (re-search-forward "^     " nil t)
    (replace-match ""))
  )
;; (defun oqwer42 ()
;;   (interactive)
;;   (setq s '"en")
;;   (setq tt '"ru")
;;   (setq nashalus (region-beginning))
;;   (setq konetus (region-end))
;; (save-excursion (kill-new (google-translate-json-translation (google-translate-request s
;;                                          tt
;; 					 (buffer-substring-no-properties nashalus konetus))) 't)
;; )(delete-region nashalus konetus)(yank))
