#include <stdio.h>

int main(void)
{
   int i;
   float soma;
   
   soma = 0; 
   i = 1;
   while (i <= 37){
       soma = soma + ((37 - i + 1) * (38 - i + 1)) / i;
       i++;
   }
    printf("soma é: %.2f", soma);
}