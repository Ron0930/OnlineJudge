#include<stdio.h>
 int main()
 {
  int character,blank,digit,other;
  char ch;
  character=blank=digit=other=0;
  printf("");
  
  while((ch=getchar())!=';')
 {  
  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
 
   character++;
   
   
  
  else if(ch>='0'&&ch<='9')
 digit++;
 else if(ch==' ')
 blank++;
 else 
 other++;

 
 
 }
  
  printf("character=%d,blank=%d,digit=%d,other=%d;",character,blank,digit,other);
  return 0;
  
  
  
 }
 
