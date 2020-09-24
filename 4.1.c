#include <stdio.h>
#include <math.h>

int main()

{
    int x,y,z;
    float a,b,c;
do
{
        printf("Введіть число x = ");
        scanf("%d",&x);
        printf("Введіть число y = ");
        scanf("%d",&y);
        printf("Введіть число z = ");
        scanf("%d",&z);
        b=1+cos(y-2);
        a=pow(x,4)/2-pow(sin(z),2);
        if(a==0)
        {
          printf("\nВиконується ділення на нуль\nВведіть дані ще раз\n\n");
        }
      
}
while(a==0);
          c=b/a;
          printf("%f\n",c);
        }