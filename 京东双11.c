#include<stdio.h>
void main() 
{  
   void exit();
   int price,a;/*aΪ�Ƿ��Ǿ���plus��Ա*/ 
   float price1;
   printf("������۸���Ƿ�Ϊplus��Ա �м��ö��Ÿ��� �ǻ�ԱֵΪ1 ���ǻ�ԱֵΪ0\n"); 
   scanf("%d,%d",&price,&a);
   if((price<1||price>5000)||(a<0||a>1))
	{  printf("�������\n");
	   exit(); 
    } 
    switch(a)
	{  case 1:
		 if(price>=1&&price<3800)
		 {
		   price1=price-((price/1000)*100);
		   printf("��Ҫ֧��%.2fԪ",price1);break;
	     }
		 else if(price>3800&&price<=5000)
		 price1=price-((price/1000)*100)-300;
         printf("��Ҫ֧��%.2fԪ",price1);break;
		 
	   case 0:
	   	 price1=price-(price/100)*100;
		 printf("��Ҫ֧��%.2fԪ",price1);break;
		 
	} 
    system("pause");
 } 

