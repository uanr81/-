/* Fig. 10.16: fig10_16.c
   Представление карт с битовыми полями в структуре */

#include <stdio.h>

/* Определение структуры бит-карты с битовыми полями */
struct bitCard {                                  
   unsigned face : 4; /* 4 бита; 0-15 */         
   unsigned suit : 2; /* 2 бита; 0-3 */          
   unsigned color : 1; /* 1 бит; 0-1 */           
}; /* Завершить bitCard */                       

typedef struct bitCard Card; /* Новое имя типа для struct bitCard */

void fillDeck( Card * const wDeck ); /* прототип */
void deal( const Card * const wDeck ); /* прототип */

int main( void )
{ 
   Card deck[ 52 ]; /* Создать массив карт */

   fillDeck( deck );
   deal( deck );
   return 0; /* Указывает на успешное завершение */
} /* конец main */

/* Инициализировать карты */
void fillDeck( Card * const wDeck )
{ 
   int i; /* счетчик */

   /* цикл через wDeck */
   for ( i = 0; i <= 51; i++ ) { 
      wDeck[ i ].face = i % 13; 
      wDeck[ i ].suit = i / 13; 
      wDeck[ i ].color = i / 26;
   } /* конец for */
} /* конец функции fillDeck */

/* Выходные карточки в двухколоночном формате; Карточки 0-25 подстрочные
   K1 (колонка 1); Карточки 26-51, индексированные k2 (столбец 2)*/
void deal( const Card * const wDeck )
{ 
   int k1; /* Подстрочные индексы 0-25 */
   int k2; /* Подстрочные индексы 26-51 */

   /* цикл через wDeck */
   for ( k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++ ) { 
      printf( "Карта:%3d  Масть:%2d  Цвет:%2d   ",
         wDeck[ k1 ].face, wDeck[ k1 ].suit, wDeck[ k1 ].color );
      printf( "Карта:%3d  Масть:%2d  Цвет:%2d\n",
         wDeck[ k2 ].face, wDeck[ k2 ].suit, wDeck[ k2 ].color );
   } /* конец for */
} /* конец функции deal */


 

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
