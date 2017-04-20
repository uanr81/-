/* Fig. 10.5: fig10_05.c
   Пример объединения */
#include <stdio.h>

/* определение объединения number */
union number {               
   int x;                    
   double y;                 
}; /* конец объединения number */    

int main( void )
{ 
   union number value; /* Определить переменную объединения */
   
   value.x = 100; /* Вставить целое число в объединение */
   printf( "%s\n%s\n%s\n  %d\n\n%s\n  %f\n\n\n",
      "Помещает значение 100 в элемент x c типом int", 
      "и выводит оба элемента объединения.",
      "int:", value.x, 
      "double:", value.y );
   
   value.y = 100.0; /* присвоить второму элементу тоже значение */
   printf( "%s\n%s\n%s\n  %d\n\n%s\n  %f\n",
      "Помещает значение 100.0 в элемент у с типом double",
      "и выводит оба элемента объединения.",
      "int:", value.x, 
      "double:", value.y );
   return 0; /* индикация нормального завершения программы */
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
