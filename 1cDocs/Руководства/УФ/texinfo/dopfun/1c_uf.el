(defun _подРазделВставить (x)
  "Вставить раздел с картинкой"
  (interactive "sВведи имя подраздела: ")
  (setq endexmp (concat "@node " x"

@subsubsection " x"

@image{./Kartinki/_}"))
  (insert endexmp)
  )

(defun _РазделВставить (x)
  "Вставить раздел с картинкой"
  (interactive "sВведи имя раздела: ")
  (setq endexmp (concat "@node " x"

@section " x"

@image{./Kartinki/_}
Рис. "))
  (insert endexmp)
  )


(defun _shablonSvoistv (x)
  "Создать шаблон главы"
  (interactive "sВведи имя главы: ")
  (setq endexmp (concat "@node " x"

@chapter " x"

@menu

@end menu

@node " x " Основные

@subsection " x " Основные

@menu
@end menu

@node " x " Использование

@subsection " x " Использование

@menu
@end menu

@node " x " Оформление

@subsection " x " Оформление

@menu
@end menu

@node " x " Расположение

@subsection " x " Расположение

@menu
@end menu"))
  (insert endexmp)
  )
