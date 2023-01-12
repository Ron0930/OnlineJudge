#include<stdio.h>
void main()
{   int number,sum,i;
    scanf("%d",&number);
    sum=0;
    for(i=1;i<=number-1;i++)
      if(number%i==0)
       sum=sum+i;
     if(number==sum)
       printf("yes");
     else
      printf("no");


}
