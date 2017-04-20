/* Fig. 11.12: fig11_12.c
   Запись в файл произвольного доступа  */
#include <stdio.h>

/* определение структуры clientData */
struct clientData { 
   int acctNum; /* лицевой счет */
   char lastName[ 15 ]; /* фамилия */
   char firstName[ 10 ]; /* имя */
   double balance; /* баланс */
}; /* окончание структуры clientData */
 
int main( void ) 
{ 
   FILE *cfPtr; /* credit.dat указатель на типа file  */

   /* создание clientData с информацией по умолчанию */
   struct clientData client = { 0, "", "", 0.0 };

   /* fopen открывает файл; Выходит, если файл не может быть открыт */
   if ( ( cfPtr = fopen( "credit.dat", "rb+" ) ) == NULL ) {
      printf( "Не удалось открыть файл.\n" );
   } /* окончание if */
   else { 
      /* требуется указать номер счета */
      printf( "Введите номер счета"
         " ( от 1 до 100, 0 - завершить ввод )\n? " );
      scanf( "%d", &client.acctNum );

      /* Пользователь вводит информацию, которая копируется в файл */
      while ( client.acctNum != 0 ) { 
         /* Пользователь вводит фамилию, имя и баланс */
         printf( "Введите фамилию, имя, баланс\n? " );
        
         /* Установить запись lastName, firstName и значение баланса */
         fscanf( stdin, "%s%s%lf", client.lastName, 
            client.firstName, &client.balance );

         /* Искать позицию в файле по указанной пользователем записи */
         fseek( cfPtr, ( client.acctNum - 1 ) * /* устанавливает указаниль позиции файла 
в заданное положение*/
            sizeof( struct clientData ), SEEK_SET );

         /* Записать информацию, указанную пользователем в файл */
         fwrite( &client, sizeof( struct clientData ), 1, cfPtr );/* записывает данные */

         /* Разрешить пользователю вводить другой номер счета */
         printf( "Введите номер счета\n? " );
         scanf( "%d", &client.acctNum );
      } /* окончание while */

      fclose( cfPtr ); /* fclose Закрывает файл */
   } /* end else */

   return 0; /* Указывает на успешное завершение */
} /* онончание main */
 


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
