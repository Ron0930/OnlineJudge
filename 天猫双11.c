#include<stdio.h>
int main()
{  void exit();
   int price,a;/*aΪ�Ƿ���88vip*/ 
   float price1;
   printf("������۸���Ƿ�Ϊ88vip �м��ö��Ÿ��� ��88VIPֵΪ1 ����88VIPֵΪ0\n"); 
   scanf("%d,%d",&price,&a);
   if(price<1||price>1000)
	{  printf("�������\n");
	   exit();
    } 
    switch(a)
	{  case 1:
		 if(price>=200&&price<400)
		 {
		 price1=(price-30)*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
         }
		 else if(price>=400&&price<600)
		 {
		 price1=(price-60)*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		 else if(price>=600&&price<800)
		 {price1=(price-90)*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		 else if(price>=800&&price<1000)
		 {
		 price1=(price-120)*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		 else if(price=1000)
		 {
		 price1=(price-150)*0.95;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 } 
		 
	   case 0:
	   	 if(price>=200&&price<400)
		 {
		 price1=(price-30);
		 printf("��Ҫ֧��%.2fԪ",price1);break;
	     }
         else if(price>=400&&price<600)
		 {
		  price1=(price-60);
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		 else if(price>=600&&price<800)
		 {
		 price1=(price-90);
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		else if(price>=800&&price<1000)
		 {
		 price1=(price-120);
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 }
		else if(price=1000)
		 {
		 price1=(price-150);
		 printf("��Ҫ֧��%.2fԪ",price1);break;
	     }
		 
	} 
    system("pause");
 } 
