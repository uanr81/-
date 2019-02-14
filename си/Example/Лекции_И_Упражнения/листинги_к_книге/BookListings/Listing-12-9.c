/* s_and_r.c -- файл для функций rand1() и srand1()      */
/*              используется переносимый алгоритм ANSI C */
static unsigned long int next = 1;  /* начальное число  */

int rand1(void)
{
    /* магическая формула для генерации псевдослучайных чисел */
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}

