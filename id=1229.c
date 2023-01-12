#include <stdio.h>
#include <math.h>
#include<string.h>
#define LL long long
int gcd(int a,int b)
{
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
	if(b==0) return a;
	else return gcd(b,a%b);
}
LL PowerMod(LL a,LL b,LL c)
{
	LL ans=1;
	a=a%c;
	while(b>0)
	{
		if(b&1) ans=(ans*a)%c;
		b>>=1;
		a=(a*a)%c;
	}
	return ans;
}
int main()
{
	LL a,b,c;
	while(scanf("%I64d%I64d%I64d",&a,&b,&c)!=EOF)
	{
		printf("%I64d\n",PowerMod(a,b,c));
	}
	return 0;
}

