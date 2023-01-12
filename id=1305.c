#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,n;
	gets(s);
	n=strlen(s);
	for(i=0,j=n-1;i<j;i++,j--)
	  if(s[i]!=s[j])
	    break;
	  if(i<j)
	    printf("No");
	  else
	    printf("Yes"); 
	return 0;
}

