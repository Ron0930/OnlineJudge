#include<stdio.h>
#define N 50
int main()
{
    int i;
	char a[N];
    scanf("%s",&a);
    for(i=0;i<N;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else 
           a[i]=a[i];
    }
    printf("%s",a);
    return 0;
}
