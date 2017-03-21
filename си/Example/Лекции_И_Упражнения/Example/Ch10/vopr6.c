// vopros6
#include <stdio.h>
int main(void)
{
    int grid[30][100];
    
    printf("адрес элемента через индекс = %x , адрес элемента через указатель = %x \n",
	   &grid[22][56], (*(grid + 22))+56);
    
    return 0;
}
