(defun меню_Звезда_Двоеточие ()
"Из строк создать шаблон меню режима texi"
  (interactive)
  (goto-char (region-beginning))  
  (while (re-search-forward "^.*$" (region-end) t)
    (replace-match nill "*"))
  )
