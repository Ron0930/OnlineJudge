#include<stdio.h>
int main()
{
   int a[1023],i,N,j,k;

   scanf("%d",&N);    
   for(i=0;i<N;i++)
     scanf("%d",&a[i]);
     for(i=0;i<(N-1);i++)
       for(j=i+1;j<N;j++)
       if(a[i]>a[j])/*如果前面的数比后面的大，那么就交换这两个数*/
       {   k=a[i];
           a[i]=a[j];
           a[j]=k;
	   }
    printf("%d\n",a[1]);/*输出数组里面第二个数，也就是倒数第二小的数*/ 
    return 0;
}
