/* shoes1.c -- преобразует размер обуви в дюймы */
#include <stdio.h>
#define ADJUST 7.31              // один из видов символьной константы
int main(void)
{
    const double SCALE = 0.333;  // ещё один вид символьной константы
    double shoe, foot;
    
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Размер обуви (мужской) длинна ступни\n");
    printf("%10.1f     %15.2f дюймов\n", shoe, foot);
    
    return 0;
}
