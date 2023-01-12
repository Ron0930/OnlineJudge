#include<stdio.h>
int main()
{   int N;
    int M,M1,M2,M3;
	int R;
	int H,H1,H2,H3;
	int time;
	printf("几个活动:"); 
	scanf("%d",&N);
	switch(N)
	{  
	   case 1:
	     printf("请输入数字:");
	     scanf("%d,%d",&H1,&M1);
	     H=H1;
		 M=M1;
		 break;
	   case 2:
	     printf("请输入数字:");
	     scanf("%d,%d",&H1,&M1);
	     printf("请输入数字:");
	     scanf("%d,%d",&H2,&M2);
	     H=H1+H2;
	     M=M1+M2;
		 break;
       case 3:
	     printf("请输入数字:");
	     scanf("%d,%d",&H1,&M1);
	     printf("请输入数字:");
	     scanf("%d,%d",&H2,&M2);
	     printf("请输入数字:");
	     scanf("%d,%d",&H3,&M3);
	     H=H1+H2+H3;
	     M=M1+M2+M3;
		 break;
	   default:
	   	 printf("活动太少或太多");
		 
	     goto exitf;/*也可以在打括号里面加入void exit（）然后此处把goto exitf替换成exit（），
		 exitf只是个标签，名字可以随便取，目的就是为了跳出函数直接到最后return 0*/
	}
    time=H*60+M;
	R=24*60-time;
	if(R>=0)
	{  printf("剩余%d分钟学习",R);
	}
	else
	    printf("时间不足");
	
exitf: 
    return 0; 
}
