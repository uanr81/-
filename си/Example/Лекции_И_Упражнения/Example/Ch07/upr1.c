#include<stdio.h>
#include<ctype.h>
#define STOP '#'

int main (void)
{
  char c;
  long n_chars = 0L;
  int n_spase = 0;
  int n_lines = 1;
  printf("Введите текст\n");
  while ((c = getchar()) != STOP)
    {
      if (c == ' ')
	{
	  n_spase++;
	  continue;
	}
      if (c == '\n')
	n_lines++;
      else
	n_chars++;
      
    }
  printf("По моим подсчетам символов: %ld, пробелов: %d, строк: %d\n", n_chars,
	 n_spase, n_lines);
  return 0;
}
