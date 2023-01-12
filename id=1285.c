#include<stdio.h>
int main()
{
	int N,i;
	
	scanf("%d",&N);
	int a[N]; 
	for(i=0;i<N;i++)
	{
	  scanf("%d",&a[i]);
	}
    for(i=0;i<N;i++)
	{
	  if(a[i]>100)
	    printf("wrong\n");
	  else if(a[i]>=90)
	    printf("excellent\n");
	  else if(a[i]>=80)
	    printf("good\n");
	  else if(a[i]>=70)
	    printf("soso\n");
	  else if(a[i]>=60)
	    printf("pass\n");
	  else if(a[i]>=0)
	    printf("fail\n");
	  
	} 
    
	return 0;
}
