#include<stdio.h>
int main()
 {
    int x;
    float y;
    scanf("%d",&x);
    if(x<=150)
      y=0;
    else if(150<x&&x<=10000)
      y=(1.0/3)*(x-150);
    else if(x>10000)
      y=(1.0/3)*(10000-150)+(3.0/5)*(x-10000); 
    printf("%.2f",y);
    return 0;
}
 
