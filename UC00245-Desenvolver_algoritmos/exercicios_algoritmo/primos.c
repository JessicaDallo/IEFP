
#include <stdio.h>

int main(void)
{
    int a, b, aux, qtd_divisores;
    a = 0;
    b = 0;
    aux = 0;
    qtd_divisores = 0;
    
    printf("Informe o valor inicial: ");
    scanf("%i", &a);
    printf("Informe o valor final: ");
    scanf("%i", &b);
    
    if(b < a){
        printf("O valor final nao pode ser menor que o valor inicial");
        return 0;
    }
    while( a < b){
        aux = 1;
        qtd_divisores = 0;
        while (aux <= a){
            if ((a % aux) == 0){
                qtd_divisores++;
            }
            aux++;
        }
        if(qtd_divisores == 2){
            printf("o numero %i é um numero primo\n", a);
        }
        a++;
    }
    return 0;
}