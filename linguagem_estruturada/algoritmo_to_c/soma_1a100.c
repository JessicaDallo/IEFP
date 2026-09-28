#include <stdio.h>

int main(void)
{
    int cont, soma;
    
    cont = 0;
    soma = 0;
    while(cont <= 100){
        soma =  soma + cont;
        cont++;
    }
    printf("O total da soma é: %i", soma);
    return 0;
}