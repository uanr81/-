// upr2.c
#include <stdio.h>

int main(void)
{
  int i, y;

  for (i = 0; i < 6; i++, printf("\n"))
    for (y = 0; y < i; y++, printf("%c", '$'))    
      ;
  ;
    
  return 0;
}
