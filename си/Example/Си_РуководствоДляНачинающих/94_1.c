#include <stdio.h>
#include <string.h>
#define SM 60
int main( )
{
  int sec = 1, min, left;
  printf( "Эта программа переводит секунды в минуты и секунды \n" );
  printf( "Укажите число секунд \n" );
  printf( "Для окончания работы программы необходимо ввести 0 \n");
  while (sec != 0){
    printf(" Введите следующее значение \n");
    scanf( "%d", &sec),
      min = sec / SM;
    left = sec % SM;
    printf("%d сек это %d мин %d сек \n", sec, min, left);
  }
  printf("До свидания!\n");
}
