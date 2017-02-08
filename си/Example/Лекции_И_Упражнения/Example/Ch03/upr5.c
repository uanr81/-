#include <stdio.h>
int main(void)
{
  double vgodusec = 3.156e7;
  int vozrast;
  printf("Введите ваш возраст в годах : ");
  scanf("%d", &vozrast);
  printf("Ваш полный возвраст составляет: %e секунд\n", vgodusec * vozrast);
    
  return 0;
}
