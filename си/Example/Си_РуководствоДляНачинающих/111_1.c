#include <stdio.h>
int main()
{
  int ch; /* переменная для ввода символа */
  int index;
  int chnum;
  while((ch=getchar()) != '\n' ){
    chnum = ch % 26; /* получение числа от 0 до 25 */
    index = 0;
    while(index++ < (30 - chnum))
      putchar(' '); /* печать пробелов сдвига к центру */
    index = 0;
    while(index++ < (2 * chnum + 1))
      putchar(ch); /* повторная печать символа */
    putchar('\n');
  }
}
