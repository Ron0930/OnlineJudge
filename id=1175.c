#include<stdio.h>
void main()
{   int a,b,sum,i,item;
    scanf("%d %d",&a,&b);
    sum=0;
	if(a<b)
      for(i=a,item=a;i<=b;i++)
      { 
	     sum=sum+item;
         item++;
	  }
    if(a>b)
	  for(i=b,item=b;i<=a;i++)
	  {  
	     sum=sum+item;
		 item++; 
	  }  
	  printf("%d",sum);
} 
