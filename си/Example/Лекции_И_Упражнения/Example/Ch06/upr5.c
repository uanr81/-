// upr5.c
#include <stdio.h>

int main(void)
{
  int i, y, p;
  char s, sym ;

  printf("Введите сивол для построения фигуры: ");
  scanf("%c", &sym);
  printf("\n");

  for (s = 'A'; s <= sym; s += 1, printf("\n"))
    {
      printf("%*c", sym - s + 1, ' ');//второй аргумент задает ширину поля
      for(y = 'A'; y <= s; y++)
	printf("%c", y);
      for(p = y - 2; p >= 'A'; p--)
	printf("%c", p);
    }
  return 0;
}
