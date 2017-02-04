#include <stdio.h>
#include <string.h>
int main( )
{
  printf("/%f/\n", 1234.56);
  printf("/%e/\n", 1234.56);
  printf("/%4.2f/\n", 1234.56);
  printf("/%3.1f/\n", 1234.56);
  printf("/%10.3f/\n", 1234.56);
  printf("/%10.3e/\n", 1234.56);
}
