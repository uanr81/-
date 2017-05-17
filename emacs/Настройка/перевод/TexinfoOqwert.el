(defun oTqwer32 ()
  (interactive)
  (setq епрст '())
  (setq s '"en")
  (setq tt '"ru")
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (setq orig (buffer-substring-no-properties nashalus konetus))
(save-excursion (kill-new (google-translate-json-translation (google-translate-request s
                                         tt
					 orig)) 't)
)(delete-region nashalus konetus)(yank))

