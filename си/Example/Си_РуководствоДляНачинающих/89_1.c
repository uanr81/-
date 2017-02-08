#include <stdio.h>
#include <string.h>
int main()
{
  char ch;
  int i;
  float fl;
  fl = i = ch = 'A'; /* строка 8 */
  printf(" ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
  ch = ch + 1;/* строка 10 */
  i = fl + 2 * ch; /* строка 11 */
  fl = 2.0 * ch + i;/* строка 12*/
  printf(" ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
  ch = 2.0e30;/* строка 14 */
  printf(" Теперь ch = %c \n" , ch);
}
