#include<stdio.h>
#include<math.h>
void main()
{
	int N,i,h;
	float h1,sum,item;/*sum表示路程，h表示初始高度，h1表示第n次反弹高度*/
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
