#include<stdio.h>
void main()
{   int N,f,d,i;/*fΪ��i���ĸ��ֵ��dΪ��i�������*/
    float sum,item;
    scanf("%d",&N);
	sum=0;
    d=1;
	f=2;
	
	for(i=2;i<=N;i++)
	{  
	   item=d*1.0/f;
	   d=-d;
	   sum=sum+item;
	   f=f+1;
	}
    printf("%.2f",sum+1);
}
