/*#include<stdio.h>
void main()
{   float m,average,sum;
    int i,N;
	scanf("%d",&N);
	sum=0;
	for(i=1;i<=N;i++)
	{    
	    scanf("%d ",&m);
		sum=sum+m;
		
	} 
    average=sum/N;
    printf("%.2f",average);
}*/
#include<stdio.h>
int main()
{
    int i,N;
    float sum = 0,score[100];
    scanf("%d",&N); 
    for (i = 0;i < N;i++)
    {
        scanf("%f", &score[i]);
        sum = sum + score[i];
    }
    printf("%.2f",sum / N);
}
