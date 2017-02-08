#include <stdio.h>
#include <string.h>
int main( )
{
  int x = 1, y = 1, z;
  printf("Введите количество рабочих дней\n");
  scanf("%d", &z);
  while( z-- > 0){
    printf("%2d грн получит за %3d день, общий доход составит %4d грн. \n", x * x , x , y);
    x++;
    y = y + x * x;
  }
  printf("До свидания!\n");
}
