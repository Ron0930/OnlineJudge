/*#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	float h,h1,h2,sum,item;/*sum表示路程，h表示初始高度，h1表示第n次反弹高度*/
	/*scanf("%f %d",&h,&n);
	sum=0;
	for(i=1;i<=n;i++)
	{   
	    h1=h/pow(2,i);
		h2=h1;
		item=h2+h1; 
		sum=sum+item;
	} 
	
	
	printf("%.2f %.2f",sum,h1);
 }*/ 旧思路 没做出来，以下为新思路 
#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	float h,h1,sum,item;/*sum表示路程，h表示初始高度，h1表示第n次反弹高度*/
	scanf("%f %d",&h,&n);
	sum=0;
	
	for(i=2;i<=n;i++)
	{   
	    item=(h/pow(2,i-1))*2; 
		sum=sum+item;
	} 
	for(i=1;i<=n;i++)
	{   
	    h1=h/pow(2,i);
	}
	printf("%.2f %.2f",sum+h,h1);
 } 
