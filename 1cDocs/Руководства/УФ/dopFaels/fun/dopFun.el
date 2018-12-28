(defun _spisokSvoistv ()
  "Вытянуть свойства управляемой формы"
  (interactive)
  (setq svoistva '())
  (while (re-search-forward "^[[:alpha:]]+" nil t)
    (setq svoistva (cons svoistva match)replace-match ""))
  (setq svoistva (cons svoistva (match-string 0) ))
  (while svoistva
   () )
  
  )
