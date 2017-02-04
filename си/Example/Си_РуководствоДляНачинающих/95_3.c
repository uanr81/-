#include <stdio.h>
#include <string.h>
int main( )
{
  int x = 1, y = 1, var;
  printf("Введите число");
  scanf("%d", &var);
  while( y++ < var){
    x = x + y * y;
    printf("%d грн получит за %d день, общий доход составит %d грн. \n", y * y, y, x);
  }
  printf("До свидания!\n");
}
