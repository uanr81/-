#include <stdio.h>
#include <string.h>
#define SUMMA 20
int main( ){
  int x = 1, y = 0, z;
  while((z = x++) <= SUMMA){
    printf("На %2d день Леша заработал %2d грн, и стал иметь %3d бумажных билетов\n", z,
	   z * z, y += z * z);
  }
}
