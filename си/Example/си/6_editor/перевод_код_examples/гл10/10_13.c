/* Fig. 10.13: fig10_13.c
   Использование операторов побитового сдвига */
#include <stdio.h>

void displayBits( unsigned value ); /* прототип */

int main( void )
{ 
   unsigned number1 = 960; /* инициализация number1 */

   /* Показать побитовый сдвиг влево */
   printf( "\nРезультат сдвига влево\n" );
   displayBits( number1 );
   printf( "8-битных позиций, используя " );
   printf( "оператор сдвига влево << является\n" );
   displayBits( number1 << 8 );

   /*Показать побитовый сдвиг вправо */
   printf( "\nРезультат сдвига вправо\n" );
   displayBits( number1 );
   printf( "8-битных позиций, используя " );
   printf( "оператор сдвига вправо >>\n" );
   displayBits( number1 >> 8 );
   return 0; /* Указывает на успешное завершение */
} /* конец main */

/* Отображение битов целочисленного значения без знака */
void displayBits( unsigned value )
{ 
   unsigned c; /* Счетчик */
   
   /* Объявить displayMask и сдвиг влево на 31 бит */
   unsigned displayMask = 1 << 31;

   printf( "%7u = ", value );

   /* цикл через все биты */
   for ( c = 1; c <= 32; c++ ) { 
      putchar( value & displayMask ? '1' : '0' );
      value <<= 1; /* Значение сдвига влева 1 */

      if ( c % 8 == 0 ) { /* Выводить пробел после 8 бит */
         putchar( ' ' );
      } /* конец if */
   } /* конец for */

   putchar( '\n' );
} /* конец функции displayBits */




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
