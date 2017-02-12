#include <stdio.h>
#include <string.h>      // для прототипа strlen()

int main(){

  char name[20];
  
  printf("Введите своё имя : ");
  scanf("%s", name);
  printf("Ваше имя \"%s\"\n", name);
  printf("Ваше имя \"%-20s\"\n", name);
  printf("Ваше имя \"%20s\"\n", name);
  
 }
