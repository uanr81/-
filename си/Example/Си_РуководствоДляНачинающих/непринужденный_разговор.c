#include <stdio.h>
#include <string.h>
# define DENSITY 62.4 /* плотность тела человека в фунтах на кубический фут */
int main() /* любопытствующая программа*/
{
float weight, volume;
int size, letters;
char name[40];
/* или попробуйте "static char name [40], */
printf(" Привет! Как вас зовут?\n" );
scanf(" %s" , name);
printf("%s, Каков ваш вес в фунтах?\n", name);
scanf("%f", &weight);
size = sizeof name;
letters = strlen(name);
volume = weight / DENSITY;
printf(" Прекрасно, %s, ваш объем %2.2f кубических фута.\n", name, volume);
printf(" Кроме того, ваше имя состоит из %d букв, \n", letters);
printf(" и для его размещения в памяти у нас есть %d байт. \n", size);
}
