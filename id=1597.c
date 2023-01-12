#include<stdio.h>
void main()
{   int x,y;
    scanf("%d",&x);
	if(x>0&&x<=10)
	  y=x*6;
	else if(x<=20)
	  y=60+(x-10)*2;
	else if(x<=40)
	  y=80+(x-20);
	else 
	  y=100;
	printf("%d",y);
}
#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d",&x);
 if(x>=0&&x<=10)
 y=x*6;
 else  if(x<=20)
 y=60+(x-10)*2;
 else if(x<=40)
 y=80+(x-20);
 else
 y=100;
 printf("%d",y);
 return 0;
 
}
 
