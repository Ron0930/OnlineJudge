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
	printf("�����:"); 
	scanf("%d",&N);
	if(N<=0||N>10)
	{  printf("�̫�ٻ�̫��\n");
	   exit(); 
	   //goto exitf;
	} 
	else 
	  for(i=1;i<=N;i++) /*ÿ��ѭ��i+1��i�ĳ�ʼֵ��1��ѭ��+1 N��*/
	  {
		 printf("������ʱ��%d:",i);/*��ӡʱ�伸*/
	     scanf("%d,%d",&H1,&M1);
		 H=H+H1;
	     M=M+M1;
	  }
	time=H*60+M;/*����ɷ���*/
	R=24*60-time;/*��ʱ��-time����ʣ��ʱ��*/
	if(R>=0)/*�ж�R�Ƿ�Ϊ������*/
	  printf("ʣ��%d����ѧϰ\n",R);
	else
	  printf("ʱ�䲻��\n");

    //exitf:
	  return 0; 
}
