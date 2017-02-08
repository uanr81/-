#include <stdio.h>
#include <string.h>
/* сумма */
int main() /* нахождение суммы первых 20 целых чисел */
{
  int count, sum;  /* оператор описания */
  count = 0;  /* оператор присваивания */
  sum = 0;  /* то же самое */
  while(count++ < 20) /* while */
    sum = sum + count;  /* оператор */
  printf (" sum = %d\n" , sum);  /* вызов функции */
}
