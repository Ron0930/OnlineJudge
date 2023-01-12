#include<stdio.h>
int main()
{   int N;
    int M,M1;
	int R,i;
	int H,H1;
	int time;
	void exit();
	
	H=0;
	M=0;
	printf("几个活动:"); 
	scanf("%d",&N);
	if(N<=0||N>10)
	{  printf("活动太少或太多\n");
	   exit(); 
	   //goto exitf;
	} 
	else 
	  for(i=1;i<=N;i++) /*每次循环i+1，i的初始值是1，循环+1 N次*/
	  {
		 printf("请输入时间%d:",i);/*打印时间几*/
	     scanf("%d,%d",&H1,&M1);
		 H=H+H1;
	     M=M+M1;
	  }
	time=H*60+M;/*换算成分钟*/
	R=24*60-time;/*总时间-time等于剩余时间*/
	if(R>=0)/*判断R是否为正整数*/
	  printf("剩余%d分钟学习\n",R);
	else
	  printf("时间不足\n");

    //exitf:
	  return 0; 
}
