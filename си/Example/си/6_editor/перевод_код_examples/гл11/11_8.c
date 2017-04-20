/* Fig. 11.8: fig11_08.c
   Программа кредитного запроса */
#include <stdio.h>

/* Main начинает выполнение программы */
int main( void )
{ 
   int request; /* номер запроса */
   int account; /* номер аккаунта */
   double balance; /* баланс */
   char name[ 30 ]; /* имя пользователя */
   FILE *cfPtr; /* clients.dat Указатель файла */

   /* fopen открывает файл; Выходит из программы, если файл не может быть открыт */
   if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
      printf( "Не удалось открыть файл\n" );
   } /* конец if */
   else {
      
      /* Параметры запроса на отображение */
      printf( "Введите запрос\n"
         " 1 - Список счетов с нулевым балансом\n"
         " 2 - Список счетов с кредитными остатками\n"
         " 3 - Список счетов с дебетовыми остатками\n"
         " 4 - Конец запроса\n? " );
      scanf( "%d", &request );

      /* Обработать запрос пользователя */
      while ( request != 4 ) { 

         /* Читать учетную запись, имя и баланс из файла */
         fscanf( cfPtr, "%d%s%lf", &account, name, &balance );

         switch ( request ) { 

            case 1:
               printf( "\nСчета с нулевым балансом:\n" );

               /* Чтение содержимого файла (до eof) */
               while ( !feof( cfPtr ) ) { 

                  if ( balance == 0 ) {
                     printf( "%-10d%-13s%7.2f\n", 
                        account, name, balance );
                  } /* конец if */

                  /* Читать учетную запись, имя и баланс из файла */
                  fscanf( cfPtr, "%d%s%lf", 
                     &account, name, &balance );
               } /* конец while */

               break;

            case 2:
               printf( "\nСчета с кредитным балансом:\n" );

               /* Чтение содержимого файла (до eof) */
               while ( !feof( cfPtr ) ) { 

                  if ( balance < 0 ) {
                     printf( "%-10d%-13s%7.2f\n", 
                        account, name, balance );
                  } /* конец if */

                  /* Читать учетную запись, имя и баланс из файла */
                  fscanf( cfPtr, "%d%s%lf", 
                     &account, name, &balance );
               } /* конец while */

               break;

            case 3:
               printf( "\nСчета с дебетовыми остатками:\n" );

               /* Чтение содержимого файла (до eof) */
               while ( !feof( cfPtr ) ) { 

                  if ( balance > 0 ) {
                     printf( "%-10d%-13s%7.2f\n", 
                        account, name, balance );
                  } /* конец if */

                  /* Читать учетную запись, имя и баланс из файла */
                  fscanf( cfPtr, "%d%s%lf", 
                     &account, name, &balance );
               } /* конец while */

               break;           
            
         } /* конец switch */ 

         rewind( cfPtr ); /* Вернуть cfPtr в начало файла */

         printf( "\n? " );
         scanf( "%d", &request );
      } /* конец while */

      printf( "Конец запроса.\n" );
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
