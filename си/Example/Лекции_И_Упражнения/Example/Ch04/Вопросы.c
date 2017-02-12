#define Q "Его Гамлет был хорош, и без намека на вульгарность."
#define BOOK "Война и мир"
#include <stdio.h>
#include <string.h>      // для прототипа strlen()

int main(){
  float cost = 12.99;
  float percent = 80.0;
  printf("Он продал эту картину за $%2.2f.\n", 2.345e2);
  printf ( "%c%c%c\n", 'H', 105, '\41');
  printf ("%s\nсодержит %d символов. \n", Q, strlen(Q)) ;
  printf("Является ли %2.2e тем же, что и %2.2f ?\n", 1201.0, 1201.0);
  printf ("\"%s\"\nсодержит %d символов. \n", Q, strlen(Q)) ;
  printf("Данный экземпляр книги \" %s \" стоит $%4.2f.\n", BOOK, cost);
  printf("Это %d\% от цены в прайс-листе.\n" , (int)percent);
}
