/* Fig. 10.2: fig10_02.c
   Используя элемент структуры и
   Операторы структурных указателей */
#include <stdio.h>

/* Определение структуры card */         
struct card {                           
   char *face; /* Определить тип указателя на char */
   char *suit; /* Определить тип указателя на char */
}; /* конец структуры card */             

int main( void )
{ 
   struct card aCard; /* Определить первую переменную структуры card */   
   struct card *cardPtr; /* Определить вторую переменную структуры card */

   /* Вставляем строки в aCard */
   aCard.face = "Ace";   
   aCard.suit = "Spades";

   cardPtr = &aCard; /* Назначить адрес aCard указателю */

   printf( "%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
      cardPtr->face, " of ", cardPtr->suit,                           
      ( *cardPtr ).face, " of ", ( *cardPtr ).suit );                 
   return 0; /* Указывает на успешное завершение */
} /* конец main */




/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
