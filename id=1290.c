#include<stdio.h>
#define N 50
int main()
{
    int i;
	char a[N];
    gets(a);/*�����scanf�޷���������ո�� �ַ����Ĳ���*/
    for(i=0;i<N;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else 
           a[i]=a[i];
    }
    printf("%s",a);/*puts(a)Ҳ��*/
    return 0;
}
