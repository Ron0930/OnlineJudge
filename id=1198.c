#include<stdio.h>
#define N 80 
int main()
{
    int i,j=0;
	char a[N],c;
    gets(a);/*�����scanf�޷���������ո�� �ַ����Ĳ���*/
    c=getchar();
    for(i=0;a[i]!='\0';i++)
      if(a[i]!=c)
        a[j++]=a[i];
    a[j]='\0';
    puts(a);
    return 0;
}
