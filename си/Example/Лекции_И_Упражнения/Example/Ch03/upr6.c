#include <stdio.h>
int main(void)
{
  double mmvodu = 3.0e-23;
  int kvarta = 950;
  int obiem;
  printf("Введите объем воды в квартах : ");
  scanf("%d", &obiem);
  printf("В таком объеме содержится %e  молекул воды\n", obiem * (kvarta / mmvodu));
    
  return 0;
}
