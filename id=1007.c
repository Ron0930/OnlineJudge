#include<stdio.h>
void main()
{   int n,i,d,f;/*f表示第i项的符号，d表示第i项的分母*/
    float sum,item;
    scanf("%d",&n);
    f=1;
    d=1;
    sum=0;
    for(i=1;i<=n;i++)
    {   item=f*1.0/d;
        sum=sum+item;
        f=-f;
        d=d+3;
	}
    printf("%.3f",sum);
}
