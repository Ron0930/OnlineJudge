#include<stdio.h>
void main()
{   int N,f,d,i;/*f为第i项分母的值，d为第i项的正负*/
    float sum,item;
    scanf("%d",&N);
	sum=0;
    d=1;
	f=1;
	
	for(i=1;i<=N;i++)
	{  item=d*1.0/f;
	   sum=sum+item;
	   d=-d;
	   f=f+1;
	}
    printf("%.2f",sum);
}
