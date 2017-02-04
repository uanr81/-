#include <stdio.h>
#include <string.h>
/* овцы */
#define MAX 40
int main()
{
  int count = 0;
  printf(" Я считаю овец, чтобы уснуть \n");
  while(count++ < MAX)
    printf(" %d миллионов овец, а я еще не уснул \n", count);
  printf(" %d миллионов овец, а я хр-р-р р\n" , count);
}
