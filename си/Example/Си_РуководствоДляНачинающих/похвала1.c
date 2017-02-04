#include <stdio.h>
#include <string.h>
#define PRAISE " Вот эта да, какое великолепное имя"
int main( )
{
char name [50];
printf(" Как вас зовут? \n" );
scanf(" %s", name);
printf(" Привет, %s %s\n" , name, PRAISE);
}
