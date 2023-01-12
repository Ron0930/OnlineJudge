#include<stdio.h>
void main()
{   int m,i,f;/*f为第i项的分母*/ 
    float sum,item;
    scanf("%d",&m);
    sum=0;
    f=2;
	for(i=2;i<=m+1;i++)
    {   item=1.0/f;    
	    sum=sum+item;
	    f=f+2;
	}
    printf("%.2f",sum+1);
}
