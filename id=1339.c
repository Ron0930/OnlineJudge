#include<stdio.h>
int main()
{
	int N,a;
	scanf("%d",&N);
	a=(N/7)*2;
	if(N%7==6)/*�����6�쵫����һ�ܾ�Ҫ�ټ�һ��*/
	a++;
	printf("%d",a); 
	return 0;
}
