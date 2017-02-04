#include <stdio.h>
#include <string.h>
int main()
{
  int age;
  float assets;
  char pet [30];
  printf(" Укажите ваш возраст, состояние и любимое животное.\n" );
  scanf(" %d %f" , &age, &assets);
  scanf(" %s" , pet); /* & отсутствует при указании массива символов */
  printf("%d $%.0f %s\n", age, assets, pet);
}
