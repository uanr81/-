(defun saqwer32 ()
  (interactive)
  (setq s '"en")
  (setq tt '"ru")
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
(setq ishodstroka (buffer-substring-no-properties nashalus konetus))    
(save-excursion (kill-new (google-translate-json-translation (google-translate-request s											 tt
											 ishodstroka)) 't)
		  )(delete-region nashalus konetus)(yank))

