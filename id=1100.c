#include<stdio.h>
void main()
{   int x,f,d,i;/*f为第i项分母的值，d为第i项的正负*/
    float sum,item;
    scanf("%d",&x);
	sum=0;
    d=1;
	f=2;
	
	for(i=2;i<=100;i++)
	{  item=d*x*1.0/f;
	   sum=sum+item;
	   d=-d;
	   f=f+1;
	   
	}
    printf("%.2f",sum+1);
}
