#include<stdio.h>
void main()
{   float x,y,bmi;
    scanf("%f %f",&x,&y);
    bmi=x/(y*y);
	if(bmi<18.5)
	  printf("thin");
	if(bmi>=18.5&&bmi<24)
	  printf("health");
	if(bmi>=24&&bmi<28)
	  printf("heavy");
	if(bmi>=28)
	  printf("fat");    
 } 
