					;подготавливаем фрагмент для перевода(заменяем все непереводимые куски на непереводимые идентификаторы)
(kill-ring-save BEG END &optional REGION)
(isearch-abort)
isearch-forward-regexp
Command: Делать инкрементный поиск вперед для регулярного выражения.
isearch-forward-symbol-at-point
  Command: Сделайте инкрементный поиск вперед для символа, найденного рядом
с точкой.
isearch-forward-symbol
Command: Делать инкрементный поиск вперед для символа.
isearch-query-replace
  Command: Старт `query-replace' cо строкой, чтобы заменить последнюю
строку поиска.
isearch-query-replace
  Command: Старт `query-replace' cо строкой, чтобы заменить последнюю
строку поиска.
isearch-symbol-regexp
  Function: Возвращает регулярное выражение, которое соответствует STRING в
качестве символа.
isearch-update-post-hook
  Variable: Функция(ы) для вызова после isearch находит совпадения в
буфер.
isearch-yank-internal
Function: Вытяните текст от точки до точки, JUMPFORM.
nonincremental-search-forward
Command: Прочитайте строку и выполните поиск нестандартно.
posix-search-backward
  Command: Искать назад от точки для соответствия регулярному выражения
           REGEXP.
posix-search-forward
Command: Искать вперед от точки для регулярного выражения REGEXP.
re-search-backward
  Command: Искать назад от точки для соответствия регулярному выражению
REGEXP.
re-search-forward
Command: Искать вперед от точки для регулярного выражения REGEXP.
replace-search
  Function: Искать следующее вхождение SEARCH-STRING в
  	    и заменить.
(search-forward)
  Command: Искать вперед от точки STRING.
  Properties: event-symbol-element-mask event-symbol-elements
modifier-cache
search-forward-regexp
Command: Искать вперед от точки для регулярного выражения REGEXP.
word-search-forward
  Command: Искать вперед от точки STRING, игнорируя различия
в пунктуации.


					;переводим

					;приводим в изначальное состояние(заменяем все идентификаторы на сохраненные куски)

