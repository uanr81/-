#include <stdio.h>
#include <string.h>
int main( )
{
  int x = 1, y = 1, z;
  printf("Введите количество рабочих дней\n");
  scanf("%d", &z);
    while( z-- > 0){
    printf("%d грн получит за %d день, общий доход составит %d грн. \n", x , x * x, y);
    y = y + x * x;
    x++;
  }
  printf("До свидания!\n");
}
