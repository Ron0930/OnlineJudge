#include<stdio.h>
void main()
{
	int n,x,y;
	scanf("%d",&n);
	x=n;
	while(x>=n)
	{   x++;
	    y=x+2;
	    if((y-x)==2&&x%1==0&&x%x==0&y%1==0&&y%y==0)
	      printf("%d %d",x,y);
	}
}
