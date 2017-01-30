#include <stdio.h>
/* подсчет строк входного потока */
main()
{
  int c, nl, t, pr;
  nl = 0;
  t = 0;
  pr = 0;
  while ((c = getchar()) != EOF)
    {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++t;
    if (c == ' ')
      ++pr;
    }
  printf("\nКоличество строк %d\nКоличество табов %d\nКоличество пробелов %d\n", nl, t, pr);
}
