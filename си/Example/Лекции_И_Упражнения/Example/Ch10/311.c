#include <stdio.h>

int main(void)
{
  int a;
  int *aPtr;
  a = 7;
  aPtr = &a;
  printf("Адрес переменной a : %p\n"
	 "Значение переменной указателя типа aPtr : %p\n", &a, aPtr);
  printf("Значение переменной a : %d\n"
	 "Значение переменной указателя типа aPtr : %d\n", a, *aPtr);
  printf("Использование * и & для манипулирования данными"
	 "\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
  return 0;
  
}
