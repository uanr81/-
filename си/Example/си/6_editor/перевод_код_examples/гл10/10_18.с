/* Fig. 10.18: fig10_18.c
   Использование типа перечисления */
#include <stdio.h>

/* Константы перечисления представляют месяцы года */
enum months { 
   JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main( void )
{ 
   enum months month; /* Может содержать любой из 12 месяцев */

   /* Инициализировать массив указателей */
   const char *monthName[] = { "", "January", "February", "March", 
      "April", "May", "June", "July", "August", "September", "October",
      "November", "December" };
   
   /* Цикл через месяцы */
   for ( month = JAN; month <= DEC; month++ ) {
      printf( "%2d%11s\n", month, monthName[ month ] );
   } /* конец for */

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
