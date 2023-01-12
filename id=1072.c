#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double temp=1;
    int count=0;
    while(temp<2)
    {
        temp=(1+x)*temp;/*temp+=temp*xÒ²ÐÐ*/
        count++;
    }
    printf("%d",count);
    return 0;
}
