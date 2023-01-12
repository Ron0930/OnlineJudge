#include<stdio.h>
int main()
{   int score;
    printf("ÇëÊäÈë·ÖÊý:");
    scanf("%d",&score);
	char result=' ';
    if(score>=90&&score<=100)
     result='A';
    else if(score<90&&score>=80)
     result='B';
    else if(score<80&&score>=70)
	 result='C';
	else if(score<70&&score>=60)
	 result='D';
	else
	 result='E';
	putchar(result);
	system("pause");
	return 0; 
}
