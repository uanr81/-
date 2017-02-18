// upr4.c
#include <stdio.h>

int main(void)
{
  int i, y;
  char s = 'A';

  for (i = 0; i < 7; i++, printf("\n"))
    for (y = 0; y < i; y++, printf("%c", s), s += 1)    
      ;
  ;
    
  return 0;
}
