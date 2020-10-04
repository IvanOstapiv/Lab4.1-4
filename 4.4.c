#include <stdio.h>
#include <math.h>

int main()
{
float y=0,x=0,a=-3.14/2,b = 3*3.14/2,dx = 3.14/3;
printf("X\t\t\t\t\tY\n");
while (x<=b)
{
y=pow(cos(x),2)+3*sin(x);
printf(" %f\t%9.2lf\n", x, y);
x+=dx;
}
return 0;
}
