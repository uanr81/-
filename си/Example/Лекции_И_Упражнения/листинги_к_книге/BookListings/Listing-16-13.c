//  mytype.c

#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
    int: "int",\
    float : "float",\
    double: "double",\
    default: "другой"\
)

int main(void)
{
    int d = 5;

    printf("%s\n", MYTYPE(d));     // d имеет тип int
    printf("%s\n", MYTYPE(2.0*d)); // 2.0* d имеет тип double
    printf("%s\n", MYTYPE(3L));    // 3L имеет тип long
    printf("%s\n", MYTYPE(&d));    // &d имеет тип int *

    return 0;
 }
