#include<stdio.h>
int main()
{
   int a[1023],i,N,j,k;

   scanf("%d",&N);    
   for(i=0;i<N;i++)
     scanf("%d",&a[i]);
     for(i=0;i<(N-1);i++)
       for(j=i+1;j<N;j++)
       if(a[i]>a[j])/*���ǰ������Ⱥ���Ĵ���ô�ͽ�����������*/
       {   k=a[i];
           a[i]=a[j];
           a[j]=k;
	   }
    printf("%d\n",a[1]);/*�����������ڶ�������Ҳ���ǵ����ڶ�С����*/ 
    return 0;
}
