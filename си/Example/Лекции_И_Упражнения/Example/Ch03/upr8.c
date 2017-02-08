#include <stdio.h>
int main(void)
{
  float sm;
  printf("Введите объём содержимого в чашках: ");
  scanf("%f", &sm);
  printf("Объем составляет %.2f пинты, %.2f унций , %.2f ст ложек, %.0f ч ложек \n",
	 sm / 2., sm * 8., sm * 8. * 2., sm * 8. * 2. * 3. );
    
  return 0;
}
