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
		b[i]=a[m];/*b�����һ��Ԫ����a�������һ��Ԫ�ؽ���*/
	}
	strcat(a,b);/*������������*/
	puts(a);
	return 0;
}
 
