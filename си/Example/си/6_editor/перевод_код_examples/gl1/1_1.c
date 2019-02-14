#include <stdio.h>
int main(void)
{
  int dogs;

  printf("Сколько у вас собак?\n");
  scanf("%d",&dogs);
  printf("Следовательно, увас %d собак(а, и)!\n", dogs);
  return 0;
}
