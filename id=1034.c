#include<stdio.h>
void main()
{   int m,i,f;/*f为第i项的分母*/ 
    float sum,item;
    scanf("%d",&m);
    sum=0;
    f=1;
	for(i=1;i<m+2;i++)
    {   item=1.0/f;    
	    sum=sum+item;
	    f=f+2;
	}
    printf("%.6f",sum);
}
