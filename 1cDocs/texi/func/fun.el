(defun меню_Звезда_Двоеточие ()
"Из строк создать шаблон меню режима texi"
  (interactive)
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (goto-char nashalus)  
  (while (re-search-forward "^.*$" konetus t)
    (replace-match nil (concat "*" (match-string 0) "::")))
  )
