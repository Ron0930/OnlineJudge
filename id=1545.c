#include<stdio.h>
void main()
{   int N,i,t;
    char result;
    scanf("%d",&N);
    t=2*N;
	int a[t];
	for(i=1;i<=N;i++) 
	  {              //2*(i-1)   2*(i-1)+1 
		scanf("%d%d",&a[2*i-2],&a[2*i-1]);  
      }
    for(i=0;i<t;i+=2)
    {
	    if(a[i]*a[i+1]>0)
	       result='+';
	    else 
		   result='-';
		printf("%c\n",result);
    }
}
  /*for(i=0;i<t;i+=2) 
	{
	scanf("%d%d",&a[i],&a[i+1]);
	}         第一个循环也可以这样写*/
