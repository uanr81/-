// upr1.c
#include <stdio.h>

int main(void)
{
  int i;
  char s;
  const int MAX = 26;
  char m[MAX];
  
  for (i = 0, s = 'a'; i < MAX; i++, s += 1)
    m[i] = s;
  for (i = 0; i < MAX; i++)    
        printf("%c", m[i]); 
   
  return 0;
}
