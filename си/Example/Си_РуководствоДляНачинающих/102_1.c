#include <stdio.h>
/*подсчет символов */
#define STOP '\n' /*дает символу * символическое имя STOP*/
int main()
{
  char ch;
  int count = 0; /*инициализация счетчика символов */
  while((ch = getchar()) != STOP){ 
    putchar (ch); /* строка 11 */
    count++; /* строка 12 */
  }
  printf("\n Всего было прочитано %d символов \n", count);
}
