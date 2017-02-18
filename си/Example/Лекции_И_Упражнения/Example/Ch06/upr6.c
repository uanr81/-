// upr6.c
#include <stdio.h>

int main(void)
{
  int i, y, p;
  char s, sym ;
  printf("Введите целое начальное число для построения таблицы: ");
  while(1 == scanf("%d", &p))
    {
      printf("Введите целое конечное число для построения таблицы: ");
      while(1 == scanf("%d", &i))
	for(y = p; y <= i; y++)
	  printf("число = %5d его квадрат = %5d его куб = %5d \n", y, y * y, y * y * y);
    }
  return 0;
}
