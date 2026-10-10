
#include <stdio.h>

int main()
{
    float media;
    int idade, menor, maior, soma, cont;
    
    soma = 0;
    menor = 99999;
    maior = 0;
    media = 0;
    cont = 0;
    while(idade != 0){
        printf("Escreva uma idade: ");
        scanf ("%i", &idade);
       
        soma = soma + idade;    
        if(idade < menor && idade != 0){
            menor = idade;
        }
        else if(idade > maior){
            maior = idade;
        }
        if(idade != 0){
            cont++;
        }
    }
    media = soma / cont;
    printf("A media das idades é: %.2f\n", media);
    printf("A menor idade é: %i\n", menor);
    printf("A maior idade é: %i\n", maior);
    return 0;
}