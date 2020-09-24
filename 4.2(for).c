#include <stdio.h>
#include <math.h>

int main()

{
    int i=1,s=0;   
for(s=0; i<=20; i++)
{
    if (i % 2 == 0)
    s+=pow(i,2);
}
printf("a=%d",s);
}