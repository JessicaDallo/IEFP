
#include <stdio.h>

int main(void)
{
   int anacleto, felisberto, anos;
   
   anacleto = 150;
   felisberto = 110;
   anos = 0;
   
   while (felisberto <= anacleto){
       anacleto = anacleto + 2;
       felisberto = felisberto + 3;
       anos++;
   }
    printf ("Sao necessarios %i anos", anos);
    return 0;
}