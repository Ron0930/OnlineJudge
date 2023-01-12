#include<stdio.h>
void main()
{   int profit;/*y表示月工资*/
	float y;
	scanf("%d",&profit);
	if(profit<=1000)
	   y=500;
    if(profit>1000&&profit<=5000)
	   y=500+profit*0.25;
	if(profit>5000)
	  y=500+profit*0.5;
	printf("%.2f",y); 
}

