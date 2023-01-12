#include<stdio.h>
void main()
{   int men,women,child;
    for(men=0;men<15;men++)
      for(women=0;women<22.5;women++)
        for(child=0;child<45;child+=2)
          if(women+child+men==45&&3*men+2*women+child/2==45)
            printf("men=%d women=%d child=%d\n",men,women,child);
}
