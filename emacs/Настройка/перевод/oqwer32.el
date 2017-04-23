(defun oqwer32 ()
  (interactive)
  (setq s '"en")
  (setq tt '"ru")
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
(save-excursion (kill-new (google-translate-json-translation (google-translate-request s
                                         tt
					 (buffer-substring-no-properties nashalus konetus))) 't)
)(delete-region nashalus konetus)(yank))

