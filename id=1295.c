#include <stdio.h>
int main()
{
    int N,M,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&M);
    for(i=N;i>=M;i--)
    {
        a[i]=a[i-1];
    }
    scanf("%d",&a[M-1]);
    for(i=0;i<=N;i++)
    {
        printf("%d ",a[i]);
    }   
    return 0;
}
