#include <stdio.h>
int main(void)                                        /*1*/
{                                                     /*2*/
  int weight, height;                                 /*вес в фунтах, рост в дюймах */
                                                      /* 4 */
  scanf("%d%d" , &weight, &height);                   /* 5 */
  if (weight < 100 && height > 64)                    /* 6 */
    if (height >= 72)                                 /* 7 */
      printf ("Ваш вес слишком мал для вашего роста.\n");
    else if (height < 72 && height > 64)              /* 9 */
      printf("Ваш вес мал для вашего роста.\n");      /* 10 */
    else if (weight > 300 && != (weight <= 300)       /* 11 */
	     && height < 48)                          /* 12 */
      if (!(height >= 48) )                           /* 13 */
	printf ("Ваш рост мал для вашего веса.\n");
      else                                            /* 15 */
	printf ("У вас идеальный вес.\n");            /* 16 * /
					              /* 17 */
  return О;
}
