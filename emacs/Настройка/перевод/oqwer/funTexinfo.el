(defun dsa123 ()
  (interactive)
  (setq s '"en")
  (setq tt '"ru")
  ;(setq spisKomand ())
  (setq nashalus (region-beginning))
  (setq konetus (region-end))
  (setq ishodstroka (buffer-substring-no-properties nashalus konetus)) ;в этом символе будет исходная строка
  (save-excursion; сохраняем точку метку и буффер
    (set-buffer "*scratch*"); активизируем скратч буффер
    (erase-buffer); очищаем его полностью
    (insert ishodstroka); вставляем нашу неизмененную строку
    (goto-char 1); переходим в начало буффера
    (netOTSTUP)
    (нетНС)
    (setq spisKomand (ZamenaKomandNaObjtex))
    (mark-whole-buffer)
    (setq odnastroka (buffer-substring-no-properties (region-beginning) (region-end)))
    (kill-new (google-translate-json-translation (google-translate-request s
									   tt
									   odnastroka)) 't)
    (erase-buffer)
    (yank)
    (ZamenaObjtex spisKomand)
    (mark-whole-buffer)
    (kill-region (region-beginning) (region-end))
    (erase-buffer)
    )
  (delete-region nashalus konetus)
  (yank)
  )

(defun ZamenaKomandNaObjtex ()
  "Заменить команды на сленг"
  (goto-char 1)
  (setq spis (list))
  (while (re-search-forward "@[^[:space:]]+}" nil t)
    (setq spis (cons (match-string 0) spis))
    (replace-match "obj1"))
  spis
  )
(defun ZamenaObjtex (spis)
  "Заменить сленг на команды"
  (goto-char 1)
  (while (re-search-forward "obj1" nil t)
    (replace-match (car spis))
    (setq spis (cdr spis)
	  )))
