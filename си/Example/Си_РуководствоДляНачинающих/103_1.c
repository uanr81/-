#include <stdio.h>
#include <string.h>
#define BLURB "Выдающееся исполнение"
int main( )
{
  printf("/%2s/\n", BLURB);
  printf("/%25.s/\n", BLURB);
  printf("/%25.5s/\n", BLURB);
  printf("/%-25.5s/\n", BLURB);
}
