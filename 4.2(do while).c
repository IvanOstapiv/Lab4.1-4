#include <stdio.h>
#include <math.h>

int main()

{
    int i=1,s=0;   
do
{
    if (i % 2 == 0)
    s+=pow(i,2);
    i++;
}while(i<=20); 
printf("a=%d",s);
}