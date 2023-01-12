#include<stdio.h>
void main()
{
	int profit;
	float y;
	scanf("%d",&profit);
	if(profit<=1000)
	  y=500;
	if(profit<=5000&&profit>1000)
	  y=500+profit*0.15;
	if(profit>5000)
	  y=500+profit*0.2;
	printf("%.2f",y);
	
}
