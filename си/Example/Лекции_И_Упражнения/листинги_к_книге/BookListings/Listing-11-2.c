/* quotes.c -- строки как указатели */
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %c\n", "Мы", " - ", *"космические бродяги");

    return 0;
}

