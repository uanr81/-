/* shoes2.c -- вычисляет длинну стопы для нескольких размеров обуви */
#include <stdio.h>
#define ADJUST 7.31              // один из видов символической константы
int main(void)
{
    const double SCALE = 0.333;  // ещё один вид символической константы
    double shoe, foot;
    printf("Размер обуви (мужской)    длинна ступни\n");
    shoe = 3.0;
    while (shoe < 18.5)      /* начало цикла while */
    {                        /* начало блока            */
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f      %15.2f дюймов\n", shoe, foot);
        shoe = shoe + 1.0;
    }                        /* конец блока             */
    printf("Если обувь подходит, носите её.\n");
    
    return 0;
}
