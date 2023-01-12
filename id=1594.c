#include<stdio.h>
int main()
{
	int i,n,hour=0,max=0;/*hour表示连续正常的小时数*/
	int low,high;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&high,&low);
		if((high>=90&&high<=140)&&(low>=60&&low<=90))
			hour++;
		else
			hour=0;
		if(hour>max)
		    max=hour;
		
	}
	printf("%d",max);
	return 0;
}
