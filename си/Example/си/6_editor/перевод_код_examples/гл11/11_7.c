/* Fig. 11.7: fig11_07.c
   Чтение и печать файла последовательного достцпа */
#include <stdio.h>

int main( void )
{ 
   int account; /* номер счета */
   char name[ 30 ]; /* имя пользователя */
   double balance; /* баланс */

   FILE *cfPtr; /* cfPtr = clients.dat Указатель файла */

   /* fopen открывает файл; Выходит из программы, если файл не может быть открыт */ 
   if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
      printf( "Не удалось открыть файл\n" );
   } /* конец if */
   else { /* Читать номер счета, имя и баланс из файла */
      printf( "%-16s%-15s%s\n", "Счет", "Имя", "Баланс" );
      fscanf( cfPtr, "%d%s%lf", &account, name, &balance );

      /* пока не конец файла */
      while ( !feof( cfPtr ) ) { 
         printf( "%-10d%-13s%7.2f\n", account, name, balance );
         fscanf( cfPtr, "%d%s%lf", &account, name, &balance );
      } /* конец while */

      fclose( cfPtr ); /* fclose закрывает файл */
   } /* конец else */

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
