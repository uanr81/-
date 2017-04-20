/* Fig. 11.11: fig11_11.c
   Последовательное создание файла с произвольным доступом  */
#include <stdio.h>

/* clientData определение структуры */
struct clientData { 
   int acctNum; /* номер счета */
   char lastName[ 15 ]; /* фамилия клиента */
   char firstName[ 10 ]; /* имя клиента */
   double balance; /* баланс */
}; /* окончание структуры clientData */

int main( void )
{ 
   int i; /* Счетчик 1-100 */

   /* создание clientData с информацией по умолчанию */
   struct clientData blankClient = { 0, "", "", 0.0 }; 
   
   FILE *cfPtr; /* credit.dat указатель файла */

   /* fopen открывает файл; Выходит, если файл не может быть открыт */
   if ( ( cfPtr = fopen( "credit.dat", "wb" ) ) == NULL ) {
      printf( "Не удалось открыть файл.\n" );
   } /* окончание if */
   else { 
 
      /* вывести 100 пустых записей в файл */
      for ( i = 1; i <= 100; i++ ) {
	fwrite( &blankClient, sizeof( struct clientData ), 1, cfPtr );/*
пересылает в файл(изначально указатель на файл cfPtr) из переменной (blankClient) заданное
 число байт (sizeof( struct clientData )) начиная с указанного адреса памяти(&blankClient), 
данные записываются с того места в файле, которое обозначено указателем позиции файла
(смещение cfPtr)В данном случае структура blankClient размером sizeof(struct clientData)
будет записана в файл, указанный cfPtr. Операция sizeof(явлеется исполняемой во время 
компиляции одноместной операцией) возвращает размер в байтах для объекта, содержащегося в 
скобках (в данном случае это struct clientData), третий аргумент используется в связке с 
первым, если тот является указателем на массив и указывет количество копируемых элементов, 
Здесь используется записи одного объекта, который не является элементом массива и поэтому 
третий аргумент равен 1, что эквивалентно записи одного элемента массива */
      } /* окончание for */

      fclose ( cfPtr ); /* fclose Закрывает файл */
   } /* end else */

   return 0; /* Указывает на успешное завершение */
} /* окончание main */


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
