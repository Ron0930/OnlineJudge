#include<stdio.h>
void main()
{   float x,y;
    scanf("%f",&x);
    if(x<1)
	  y=x;
	else if(x>=1&&x<10)
	  y=2*x-1;
	else
	  y=x*x-11;
	printf("%.2f",y);
} 
