#include<stdio.h>
void main()
{int score;
 char result;
 printf("请输入成绩:");
 scanf("%d",&score);
 switch((score/10))
 { case 9:
   printf("%d是A等级\n",score);
   break;
    case 8:
    printf("%d是B等级\n",score);
	break;
	 case 7:
     printf("%d是C等级\n",score);
	 break;
	 case 6:
      printf("%d是D等级\n",score);
	  break; 
	  case 5:
	  case 4:
	  case 3:
      case 2:
	  case 1:
	  case 0:
	  printf("%d是E\n",score);
	  break;
	  default:
		  printf("输入错误\n");
		  break;
 }
}

