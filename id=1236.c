#include<stdio.h>
#include<math.h>
void main()
{   float x,y;
    scanf("%f",&x);
    if(x<=-3)
      y=4.0/x;
    else if(x>-3&&x<3)
      y=x*x;
    else
      y=sqrt(x);
    printf("%.3f",y);
}
