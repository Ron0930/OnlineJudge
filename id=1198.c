#include<stdio.h>
#define N 80 
int main()
{
    int i,j=0;
	char a[N],c;
    gets(a);/*解决了scanf无法输入包含空格的 字符串的不足*/
    c=getchar();
    for(i=0;a[i]!='\0';i++)
      if(a[i]!=c)
        a[j++]=a[i];
    a[j]='\0';
    puts(a);
    return 0;
}
