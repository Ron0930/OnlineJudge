#include<stdio.h>
void main() 
{  void exit();
   int price,a;/*aΪ�Ƿ���88vip*/ 
   float price1;
   printf("������۸���Ƿ�Ϊ88vip �м��ö��Ÿ��� ��88VIPֵΪ1 ����88VIPֵΪ0\n"); 
   scanf("%d,%d",&price,&a);
   if((price<1||price>100)&&(a<0||a>1))
	{  printf("�������\n");
	   exit();
    } 
    switch(a)
	{  case 1:
		 
		 price1=(price-((price/200)*30))*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
         
		 
	   case 0:
	   	 price1=price-(price/200)*30;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 
	} 
    system("pause");
 } 
