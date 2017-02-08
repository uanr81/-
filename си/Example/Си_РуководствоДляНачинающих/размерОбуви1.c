#include <stdio.h>
#define OFFSET 7.64
#define SCALE 0.325
int main()
{
  /* пересчет размера обуви в размер ноги в дюймах */
  float shoe, foot;
  shoe = 90;
  foot = SCALE*shoe + OFFSET;
  printf(" Размер обуви (мужской) размер ноги\n");
  printf(" %10.1f %13.2f дюйм\n", shoe, foot);
 
}
