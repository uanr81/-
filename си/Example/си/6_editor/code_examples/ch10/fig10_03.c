/* Fig. 10.3: fig10_03.c
   Программа перетасовки карт и раздачи карт с использованием структур */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* card Определение структуры */               
struct card {                                 
   const char *face; /* Определять указатель face */
   const char *suit; /* Определять указатель suit */
}; /* Конец структуры card */                   

typedef struct card Card; /* Новое имя типа для структуры card */

/* Прототипы */
void fillDeck( Card * const wDeck, const char * wFace[], 
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{ 
   Card deck[ 52 ]; /* Определить массив Cards */

   /* Инициализировать массив указателей */
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   /* Инициализировать массив указателей */
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); /* Рандомизировать */

   fillDeck( deck, face, suit ); /* Загружать колоду Cards */
   shuffle( deck ); /* положил Cards В произвольном порядке */
   deal( deck ); /* Заниматься всеми 52 Cards */
   return 0; /* Указывает на успешное завершение */
} /* конец main */

/* Поместить строки в структуры Card */
void fillDeck( Card * const wDeck, const char * wFace[], 
   const char * wSuit[] )
{ 
   int i; /* Счетчик */

   /* цикл через wDeck */
   for ( i = 0; i <= 51; i++ ) { 
      wDeck[ i ].face = wFace[ i % 13 ];
      wDeck[ i ].suit = wSuit[ i / 13 ];
   } /* конец for */
} /* конец функции fillDeck */

/* Тасовать карты */
void shuffle( Card * const wDeck )
{ 
   int i; /* счетчик */
   int j; /* Переменная для хранения случайного значения от 0 до 51 */
   Card temp; /* Определить временную структуру для обмена Cards */

   /* Цикл через wDeck случайным образом подкачки Cards */
   for ( i = 0; i <= 51; i++ ) { 
      j = rand() % 52;
      temp = wDeck[ i ];      
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;      
   } /* конец for */
} /* конец функции shuffle */

/* Карты сделок */
void deal( const Card * const wDeck )
{ 
   int i; /* counter */

   /* loop through wDeck */
   for ( i = 0; i <= 51; i++ ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } /* end for */
} /* end function deal */



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
