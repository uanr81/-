#include <stdio.h>
int main(void)
{
  float smvdm = 2.54;
  int sm;
  printf("Введите ваш рост в сантиметрах: ");
  scanf("%d", &sm);
  printf("Ваш рост составляет: %.2f дюймов\n", sm / smvdm);
    
  return 0;
}
