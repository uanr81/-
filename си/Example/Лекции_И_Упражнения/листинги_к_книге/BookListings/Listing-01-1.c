#include <stdio.h>
int main(void)
{
    int dogs;

    printf("Сколько у вас собак?\n");
    scanf("%d", &dogs);
    printf("Следовательно, у вас %d собак(а, и)!\n", dogs);

    return 0;
}
