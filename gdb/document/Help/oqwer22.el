(defun oqwer22 ()
  (interactive)
  (setq s '"en")
  (setq tt '"ru")
  ;(edebug)
  ;(google-translate-translate s tt (buffer-substring-no-properties (region-beginning) (region-end))))
(save-excursion (kill-new (google-translate-json-translation (google-translate-request s
                                         tt
					 (buffer-substring-no-properties (region-beginning) (region-end)))) 't)
)(yank))

