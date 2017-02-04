#include <stdio.h>
#include <string.h>
#define SQUARES 64 /* число клеток на шахматной доске */
#define CROP 7E14 /* урожай пшеницы в США, выраженный в числе зерен */
int main()
{
  double current, total;
  int count = 1;
  printf(" клетка число зерен сумма зерен доля\n");
  printf("от урожая в США\n"),
    total = current = 1.0; /* начинаем с одного зерна */
  printf("Имеем %4d %15.2e %13.2e %12.2e \n", count, current, total, total/CROP);
  while (count < SQUARES){
    count = count + 1;
    current = 2.0 * current; /* у двоение числа зерен на следующей клетке*/
    total = total + current; /* коррекциясуммы*/
    printf("А далее %4d %15.2e %13.2e %12.2e \n" , count, current, total, total/CROP); }
}
