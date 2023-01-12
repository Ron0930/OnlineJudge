#include<stdio.h>
void main() 
{  
   void exit();
   int price,a;/*a为是否是京东plus会员*/ 
   float price1;
   printf("请输入价格和是否为plus会员 中间用逗号隔开 是会员值为1 不是会员值为0\n"); 
   scanf("%d,%d",&price,&a);
   if((price<1||price>5000)||(a<0||a>1))
	{  printf("输入错误\n");
	   exit(); 
    } 
    switch(a)
	{  case 1:
		 if(price>=1&&price<3800)
		 {
		   price1=price-((price/1000)*100);
		   printf("需要支付%.2f元",price1);break;
	     }
		 else if(price>3800&&price<=5000)
		 price1=price-((price/1000)*100)-300;
         printf("需要支付%.2f元",price1);break;
		 
	   case 0:
	   	 price1=price-(price/100)*100;
		 printf("需要支付%.2f元",price1);break;
		 
	} 
    system("pause");
 } 

