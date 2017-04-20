/* Fig. 10.7: fig10_07.c
   Печать беззнакового целого в битах */
#include <stdio.h>

void displayBits( unsigned value ); /* прототип */

int main( void )
{ 
   unsigned x; /* Переменная для ввода данных пользователем */

   printf( "Введите целое число без знака: " );
   scanf( "%u", &x );

   displayBits( x );
   return 0; /* Указывает на успешное завершение */
} /* окончание main */

/* Отображение битов целочисленного значения без знака */
void displayBits( unsigned value )
{ 
   unsigned c; /* счетчик */

   /* определение переменной displayMask и сдвиг в лево на 31 бит */
   unsigned displayMask = 1 << 31; 

   printf( "%10u = ", value );
   //00000000 00000000 11111101 11101000 и putchar 
   //10000000 00000000 00000000 00000000
   //
   /* цикл через биты */ 
   for ( c = 1; c <= 32; c++ ) { 
      putchar( value & displayMask ? '1' : '0' );
      value <<= 1; /* сдвиг value влево на 1 */   

      if ( c % 8 == 0 ) { /* вывод разделяющего пробала каждые 8 бит */
         putchar( ' ' );
      } /* окончание if */
   } /* окончание for */

   putchar( '\n' );
} /* окончание функции displayBits */




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
