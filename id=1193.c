#include<stdio.h>
void main()
{
	int n,i;
	float sum,term,a,b,c;
	sum=0;
	a=2;
	b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
	   term=a/b;
	   sum=sum+term;
	   c=a+b;
	   b=a;
	   a=c;
	   
	}
       printf("%.2f",sum);
} 

