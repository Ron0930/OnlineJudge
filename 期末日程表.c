#include<stdio.h>
int main()
{   int N;
    int M,M1,M2,M3;
	int R;
	int H,H1,H2,H3;
	int time;
	printf("�����:"); 
	scanf("%d",&N);
	switch(N)
	{  
	   case 1:
	     printf("����������:");
	     scanf("%d,%d",&H1,&M1);
	     H=H1;
		 M=M1;
		 break;
	   case 2:
	     printf("����������:");
	     scanf("%d,%d",&H1,&M1);
	     printf("����������:");
	     scanf("%d,%d",&H2,&M2);
	     H=H1+H2;
	     M=M1+M2;
		 break;
       case 3:
	     printf("����������:");
	     scanf("%d,%d",&H1,&M1);
	     printf("����������:");
	     scanf("%d,%d",&H2,&M2);
	     printf("����������:");
	     scanf("%d,%d",&H3,&M3);
	     H=H1+H2+H3;
	     M=M1+M2+M3;
		 break;
	   default:
	   	 printf("�̫�ٻ�̫��");
		 
	     goto exitf;/*Ҳ�����ڴ������������void exit����Ȼ��˴���goto exitf�滻��exit������
		 exitfֻ�Ǹ���ǩ�����ֿ������ȡ��Ŀ�ľ���Ϊ����������ֱ�ӵ����return 0*/
	}
    time=H*60+M;
	R=24*60-time;
	if(R>=0)
	{  printf("ʣ��%d����ѧϰ",R);
	}
	else
	    printf("ʱ�䲻��");
	
exitf: 
    return 0; 
}
