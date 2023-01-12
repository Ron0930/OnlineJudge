#include<stdio.h>
int main()
{
	int N,a;
	scanf("%d",&N);
	a=(N/7)*2;
	if(N%7==6)/*多出来6天但不满一周就要再加一天*/
	a++;
	printf("%d",a); 
	return 0;
}
