#include<stdio.h>
#include<math.h>
void main()
{
   int i=1,x,d=1;
   float sum=0,item,f=1;
   scanf("%d",&x);
   do
   {
    item=x*d/f;
    d=-d;
	f=f+1;
	sum=sum+item;
    
   }
    while(fabs(item)>(pow(10,-5)));
    printf("%.2f",sum);
}

