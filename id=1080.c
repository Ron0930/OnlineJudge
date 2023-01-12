#include<stdio.h>
#include<math.h>
void main()
{
 int n,i;
 double a,a1,sum=0,b;

 scanf("%lf %d",&a,&n);
 a1=a;
 for(i=1;i<=(n-1);i++)
 {
 b=a+a1*pow(10,i);/*2 22=2+2*10  222=22+2*10*10  */
 a=b;
 sum=sum+b;
 }
 printf("%.0lf",sum+a1);
}

