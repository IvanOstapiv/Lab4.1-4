#include <stdio.h>
#include <math.h>

int main()

{
    int i=1,s=0;   
while(i<=20)
{
    if (i % 2 == 0)
    s+=pow(i,2);
    i++;
} 
printf("a=%d",s);
}