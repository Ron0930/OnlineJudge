#include<stdio.h>
#include<math.h>
void main()
{  int x,y;
   scanf("%d",&x);
   y=x*x;
   if(y%10==x)
     printf("yes");
   else
     printf("no");
}
