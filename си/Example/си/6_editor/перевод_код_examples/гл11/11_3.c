/* Fig. 11.3: fig11_03.c
   Создание простого файла последовательного доступа */
#include <stdio.h>

int main( void )
{ 
   int account; /* номер аккаунта */
   char name[ 30 ]; /* имя пользователя */
   double balance; /* баланс */

   FILE *cfPtr; /* cfPtr = clients.dat Указатель файла */

   /* fopen открывает файл. Выйти из программы, если не удалось создать файл  */
   if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL ) {
      printf( "Не удалось открыть файл\n" );
   } /* конец if */
   else { 
      printf( "Введите учетную запись, имя и баланс.\n" );
      printf( "Введите EOF для завершения ввода.\n" );
      printf( "? " );
      scanf( "%d%s%lf", &account, name, &balance );

      /* Записать учетную запись, имя и баланс в файл с помощью функции fprintf */
      while ( !feof( stdin ) ) { 
         fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
         printf( "? " );
         scanf( "%d%s%lf", &account, name, &balance );
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
