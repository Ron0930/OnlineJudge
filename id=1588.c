#include<stdio.h>
void main()
{
	int x;
	float time,biketime,walktime;
	scanf("%d",&x);
	biketime=27+23+(x/3);
	walktime=x/1.2;
	if(biketime<walktime)
	  printf("Bike");
	if(biketime>walktime)
	  printf("Walk");
}
