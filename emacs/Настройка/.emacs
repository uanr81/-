(require 'package) ;; You might already have this line
(add-to-list 'package-archives
             '("melpa" . "https://melpa.org/packages/"))
(when (< emacs-major-version 24)
  ;; For important compatibility libraries like cl-lib
  (add-to-list 'package-archives '("gnu" . "http://elpa.gnu.org/packages/")))
(package-initialize) ;; You might already have this line
(require 'google-translate)
(require 'google-translate-default-ui)
(global-set-key "\C-ct" 'google-translate-at-point)
(global-set-key "\C-cT" 'google-translate-query-translate)

(require 'google-translate)
(require 'google-translate-smooth-ui)
(global-set-key "\C-ct" 'google-translate-smooth-translate)
;(setq `google-translate-default-source-language "ru")
;(setq `google-translate-default-target-language "en")
(setq google-translate-translation-directions-alist '(("en"."ru")))
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
;;это прилипил для gettext po файлов
(setq auto-mode-alist
      (cons '("\\.po\\'\\|\\.po\\." . po-mode) auto-mode-alist))
(autoload 'po-mode "po-mode" "Major mode for translators to edit PO files" t)
(modify-coding-system-alist 'file "\\.po\\'\\|\\.po\\."
                            'po-find-file-coding-system)
(autoload 'po-find-file-coding-system "po-mode")
;это прилипил для си кода в справке, здесь в каталоге код emacs из гита
(setq find-function-C-source-directory "~/shkola/emacs/source/emacs-24.5/src/")
