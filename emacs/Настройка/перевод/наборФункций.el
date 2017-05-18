(defun идтиДоСимвола(char)
  (while (equal nil (equal (string (char-after (point))) (string char)))
    (forward-char)))
  
