#include<stdio.h>
int main()
{  void exit();
   int price,a;/*a为是否是88vip*/ 
   float price1;
   printf("请输入价格和是否为88vip 中间用逗号隔开 是88VIP值为1 不是88VIP值为0\n"); 
   scanf("%d,%d",&price,&a);
   if(price<1||price>1000)
	{  printf("输入错误\n");
	   exit();
    } 
    switch(a)
	{  case 1:
		 if(price>=200&&price<400)
		 {
		 price1=(price-30)*0.95;
		 printf("需要支付%.2f元",price1);break;
         }
		 else if(price>=400&&price<600)
		 {
		 price1=(price-60)*0.95;
		 printf("需要支付%.2f元",price1);break;
		 }
		 else if(price>=600&&price<800)
		 {price1=(price-90)*0.95;
		 printf("需要支付%.2f元",price1);break;
		 }
		 else if(price>=800&&price<1000)
		 {
		 price1=(price-120)*0.95;
		 printf("需要支付%.2f元",price1);break;
		 }
		 else if(price=1000)
		 {
		 price1=(price-150)*0.95;
		 printf("需要支付%.2f元",price1);break;
		 } 
		 
	   case 0:
	   	 if(price>=200&&price<400)
		 {
		 price1=(price-30);
		 printf("需要支付%.2f元",price1);break;
	     }
         else if(price>=400&&price<600)
		 {
		  price1=(price-60);
		 printf("需要支付%.2f元",price1);break;
		 }
		 else if(price>=600&&price<800)
		 {
		 price1=(price-90);
		 printf("需要支付%.2f元",price1);break;
		 }
		else if(price>=800&&price<1000)
		 {
		 price1=(price-120);
		 printf("需要支付%.2f元",price1);break;
		 }
		else if(price=1000)
		 {
		 price1=(price-150);
		 printf("需要支付%.2f元",price1);break;
	     }
		 
	} 
    system("pause");
 } 
