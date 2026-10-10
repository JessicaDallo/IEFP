
#include <stdio.h>

int main(void)
{
    int a, b, aux, soma;
    
    soma = 0;
    printf ("escreva o numero inicial: ");
    scanf ("%i", &a);
    printf ("escreva o numero final: ");
    scanf ("%i", &b);
    aux = a;
    while(aux < b){
        if(aux % 2 == 0){
            soma = soma + (aux^3);
        }
        aux++;
    }
    printf("A soma dos cubos dos numeros pares é: %i", soma);
    return 0;
}