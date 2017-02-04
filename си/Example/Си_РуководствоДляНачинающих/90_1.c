#include <stdio.h>
#include <string.h>/*похвала 2*/
#define PRAISE " Вот это да, какое великолепное имя!"
int main( )
{
  char name[50];
  printf(" Как вас зовут?\n");
  scanf(" %s", name);
  printf(" Привет, %s. %s\n" , name, PRAISE);
  printf(" Ваше имя состоит из %d букв и занимает %d ячеек памяти. \n",
	 strlen(name), sizeof name);
  printf(" Хвалебная фраза состоит из %d букв", strlen(PRAISE));
  printf(" и занимает %d ячеек памяти. \n", sizeof PRAISE);
}
