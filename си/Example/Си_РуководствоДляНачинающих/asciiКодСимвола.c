#include <stdio.h>
#include <string.h>
#define BLURB "Выдающееся исполнение"
int main( )
{
  char simvol;
  printf("Введите символ\n");
  scanf("%c", &simvol);
  printf("Символ %c в коде ASCII в десятичной системе счисления соответствует %d\n",
	 simvol, simvol);
  printf("Символ %c в коде ASCII в восьмеричной системе счисления соответствует %o\n",
	 simvol, simvol);
  printf("Символ %c в коде ASCII в шестнадцатиричной системе счисления соответствует %x\n",
	 simvol, simvol);
  
}
