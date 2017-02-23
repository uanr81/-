/* upr1.c - */
#include <stdio.h>
double min(double, double); /* объявление функциии */

int main(void)
{
  double x, y, z;
    
  printf("Введите два значения.\n");
  scanf("%lf%lf", &x, &y); //передача адресов в функцию
  z = min(x, y);
  printf("Меньшим из значений является %.2lf\n", z);
  return 0;
}

double min(double x, double y)  /* определение функции */
{
  return (x > y)? y : x;
}
