#include <stdio.h>
#include <string.h>      // для прототипа strlen()

int main(){
  char name[20];
  char famil[20];
  printf("Введите своё имя и фамилию: ");
  scanf("%s %s", name, famil);
  printf("Ваша фамилия %s, ваше имя %s !\n", famil, name);
 }
