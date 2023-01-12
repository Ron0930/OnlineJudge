#include<stdio.h>
#define N 50
int main()
{
    int i;
	char a[N];
    gets(a);/*解决了scanf无法输入包含空格的 字符串的不足*/
    for(i=0;i<N;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else 
           a[i]=a[i];
    }
    printf("%s",a);/*puts(a)也行*/
    return 0;
}
