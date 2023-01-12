#include<stdio.h>
void main()
{
	int k,t,i,score;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
	  scanf("%d",&t);
	  score=t/10;
	  switch(score)
       {
    	case 10:
    	case 9:
    	printf("A\n");break;
    	case 8:
    	printf("B\n");break;
    	case 7:
    	printf("C\n");break;
    	case 6:
    	printf("D\n");break;
    	case 5:
    	case 4:
        case 2:
        case 1:
        case 0:
        printf("E\n");break;
        default:
        	printf("Score is error!\n");break;
       }
    }
}
