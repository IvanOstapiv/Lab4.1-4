#include <stdio.h>
#include <math.h>

int main()
{
int j, i, s, p = 0; 
for (i = 1; i <= 5; i++)  
 {
  for (s = 1, j = 1;j <= i; j++) 
  s *= i-j; 
 p += s;
 } 
 printf("p=%d\n", p);
} 
