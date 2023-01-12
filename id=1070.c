#include<stdio.h>
#include<math.h>
void main()
{   float x,y;
    scanf("%f",&x);
	if(x<1)
      y=x+1;
    if(x>=1&&x<=3)
      y=2*sqrt(x)-1;
    if(x>3)
      y=cos(x+3);
    printf("%.2f",y);
}
