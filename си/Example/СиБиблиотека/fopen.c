//fopen пример кода
#include <stdio.h> /* Включая стандартную библиотеку */
//#include <windows.h> /* Раскомментировать это для Windows */
 
 
int main( void )
{
  FILE *handle;
  handle = fopen("test.txt","r");
  if ( handle != 0 )
  {
    printf("Успешное выполнение fopen:\n");
    fclose(handle);
  } else {
         printf("fopen отказано в выполнении\n");
 
         if (handle != NULL) {
             fclose(handle); 
          }
         return 1;
  }
  return 0;
}
