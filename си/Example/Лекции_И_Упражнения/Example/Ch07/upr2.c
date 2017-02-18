#include<stdio.h>
#include<ctype.h>
#define STOP '#'

int main (void)
{
  char c;
  int i = 1;
  printf("Введите текст\n");
  while ((c = getchar()) != STOP)
    {
      i = 0;
      printf("Введенный символ: %c , его десятичный код ASCII: %d -- ", c, c);
      while(++i < 9)
	printf(" %c: %d ;", c, c);
      printf("\n");
    }
   
  return 0;
}
