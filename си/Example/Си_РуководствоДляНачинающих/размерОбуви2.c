#include <stdio.h>
#define OFFSET 7.64
#define SCALE 0.325
int main()
{
  /* пересчет размера обуви в размер ноги в дюймах */
  float shoe, foot;
  printf("Размер обуви (мужской) размер ноги\n");
  shoe = 3.0;
  while(shoe < 18.5)
    {
      foot = SCALE * shoe + OFFSET;
      printf("%10.1f %13.2f дюйма \n", shoe, foot);
      shoe = shoe + 1.0;
    }
  printf("Ecли эта обувь годится вам, носите ее \n");
}
