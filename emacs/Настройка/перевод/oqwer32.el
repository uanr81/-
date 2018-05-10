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

(defun udal_nov_str ()
  (interactive)
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (while (search-forward FROM-STRING nil t)
    (replace-match TO-STRING nil t))

  (replace-string FROM-STRING TO-STRING &optional DELIMITED START END
BACKWARD)
  )
