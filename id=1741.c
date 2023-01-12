#include<stdio.h>
void main()
{   int X,Y,Z,date;
    scanf("%d %d %d",&X,&Y,&Z);
    switch(Z)
	{   case 0:
		  if(X==12)
		    date=46+31-Y;
		  if(X==11)
		    date=45+31+30-Y;	
		  break;
        case 1:
		  if(X==12)
		    date=46+31-Y-3;
		  if(X==11)
		    date=12+31+31+30-Y;
			break;	
	} 
    printf("%d",date);
}
