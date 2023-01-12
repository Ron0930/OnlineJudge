#include<stdio.h>
int main()
{   int N;
    int M,M1;
	int R,i;
	int H,H1;
	int time;
    H=0;
	M=0;
    scanf("%d",&N); 
	for(i=1;i<=N;i++) 
	  {
		 scanf("%d %d\n",&H1,&M1);
	     H=H+H1;
	     M=M+M1;
	  }
	time=H*60+M;
	R=24*60-time;
	printf("%d",R);
    return 0; 
}
