#include<stdio.h>
void main()
{   int X,Y,Z,date;
    scanf("%d %d %d",&X,&Y,&Z);
    switch(Z)
	{   case 2:
		  if(X==12)
		    date=31-Y+1;
		  if(X==11)
		    date=31+1+30-Y;	
		  break;
        case 1:
		  if(X==12)
		    date=31-Y;
		  if(X==11)
		    date=(12-X)*30-Y+31;/*31+30-YÒ²ÐÐ*/ 
			break;	
	} 
    printf("%d",date);
}
