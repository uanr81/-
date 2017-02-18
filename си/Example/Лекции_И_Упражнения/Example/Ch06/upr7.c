// upr7.c
#include <stdio.h>
#include <string.h>
int main(void)
{
  int i, y = 1, n;
  char s[40];
  printf("Введите слово: ");
  scanf("%s", s);
  printf("\n");
  for(n = strlen(s); n >= 0; n--)
    printf("%c", s[n - 1]);
  printf("\n");
  return 0;
}
