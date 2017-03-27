(defun oqwer1 ()
  (interactive)
  (setq s '"en")
  (setq tt '"ru")
  ;(edebug)
  ;(google-translate-translate s tt (buffer-substring-no-properties (region-beginning) (region-end))))
(message "%s" (google-translate-json-translation (google-translate-request s
                                         tt
					 (buffer-substring-no-properties (region-beginning) (region-end))))))

