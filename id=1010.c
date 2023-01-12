#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2,p,q;
	scanf("%f %f %f",&a,&b,&c);
	p=-b/(2*a);
	q=sqrt(b*b-4*a*c)/(2*a);
	x1=p+q;x2=p-q;
	printf("x1=%.2f x2=%.2f",x1,x2);
}
