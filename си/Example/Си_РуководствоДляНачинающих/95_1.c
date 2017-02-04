#include <stdio.h>
#include <string.h>
#define SUMMA 20
int main( )
{
  int x = 1, y = 1;
  printf("%d грн получит за %d день, общий доход составит %d грн. \n", y, y, x);
  while( y++ < SUMMA){
    x = x + y;
    printf("%d грн получит за %d день, общий доход составит %d грн. \n", y , y, x);
  }
  printf("До свидания!\n");
}
