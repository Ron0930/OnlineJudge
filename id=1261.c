#include<stdio.h>
#include<math.h>
void main()
{
	int N,i,h;
	float h1,sum,item;/*sum��ʾ·�̣�h��ʾ��ʼ�߶ȣ�h1��ʾ��n�η����߶�*/
	scanf("%d",&N);
	sum=0;
	h=100;
	for(i=2;i<=N;i++)
	{   
	    item=(h/pow(2,i-1))*2; 
		sum=sum+item;
	} 
	for(i=1;i<=N;i++)
	{   
	    h1=h/pow(2,i);
	}
	printf("%.2f %.2f",sum+100,h1);
 } 
