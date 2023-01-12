#include<stdio.h>
void main() 
{  void exit();
   int price,a;/*a为是否是88vip*/ 
   float price1;
   printf("请输入价格和是否为88vip 中间用逗号隔开 是88VIP值为1 不是88VIP值为0\n"); 
   scanf("%d,%d",&price,&a);
   if((price<1||price>100)&&(a<0||a>1))
	{  printf("输入错误\n");
	   exit();
    } 
    switch(a)
	{  case 1:
		 
		 price1=(price-((price/200)*30))*0.95;
		 printf("需要支付%.2f元",price1);break;
         
		 
	   case 0:
	   	 price1=price-(price/200)*30;
		 printf("需要支付%.2f元",price1);break;
		 
	} 
    system("pause");
 } 
