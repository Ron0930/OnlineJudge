#include<stdio.h>
void main()
{int score;
 char result;
 printf("������ɼ�:");
 scanf("%d",&score);
 switch((score/10))
 { case 9:
   printf("%d��A�ȼ�\n",score);
   break;
    case 8:
    printf("%d��B�ȼ�\n",score);
	break;
	 case 7:
     printf("%d��C�ȼ�\n",score);
	 break;
	 case 6:
      printf("%d��D�ȼ�\n",score);
	  break; 
	  case 5:
	  case 4:
	  case 3:
      case 2:
	  case 1:
	  case 0:
	  printf("%d��E\n",score);
	  break;
	  default:
		  printf("�������\n");
		  break;
 }
}

