#include<stdio.h>
void main()
{   int N,i,sum=0;
    float M;
    scanf("%d",&N);
    int a[N];
	for(i=0;i<N;i++)
	  {
		scanf("%d",&a[i]);
		sum=sum+a[i];
	  }
    if(sum>=500)
	  M=sum*0.8;
	else if(sum>=300)
	  M=sum*0.9;
	else
	  M=sum;
	printf("%.2f",M);
} 
