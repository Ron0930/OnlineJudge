#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,m,l;
	char a[50],b[50];
	gets(a);
	l=strlen(a);
	for(m=l-1;m>=0;m--,i++)
	{
		b[i]=a[m];/*b数组第一个元素与a数组最后一个元素交换*/
	}
	strcat(a,b);/*连接两个数组*/
	puts(a);
	return 0;
}
 
