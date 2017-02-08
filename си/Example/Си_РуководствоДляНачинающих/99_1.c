#include <stdio.h>
/*ввод-вывод2 */
/*ввод и печать символов до поступления завершающего символа*/
#define STOP '*' /*дает символу * символическое имя STOP*/
int main()
{
  char ch;
  ch = getchar(); /* строка 9 */
  while(ch != STOP){ /* строка 10 */
    putchar (ch); /* строка 11 */
    ch=getchar (); /* строка 12 */
  }
}
