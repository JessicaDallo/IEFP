#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculos_anos (int idade, int anos_trabalho, int anos_em_falta, int carreira){
    int cauculo, idade_restante, carreira_restante;
    if (carreira == 0){
        idade_restante =  61 - idade;
        carreira_restante = 40 - anos_trabalho;
        if (idade_restante < carreira_restante){
            return (idade_restante);
        }
        else if (carreira_restante > 0){
            if (carreira_restante < idade_restante)
                return (carreira_restante);
        }
    }
    else if(carreira == 1){
        idade_restante =  51 - idade;
        carreira_restante = 40 - anos_trabalho;
         if (idade_restante < carreira_restante){
            return (idade_restante);
        }
         else if (carreira_restante > 0){
            if (carreira_restante < idade_restante)
                return (carreira_restante);
        }
    }
    else{
        printf ("Error");
        exit ;
    }
}

float    carreira_dasgaste(int idade, int anos_trabalho, int carreira){
    float penalizacao;
    int anos_em_falta;

    if (idade > 55 && anos_trabalho >= 30){
        printf ("Trabalhador pode reformar-se");
    }
    else if (idade > 50 && anos_trabalho >= 40){
        printf ("Trabalhador pode reformar-se");
    }
    else {
        anos_em_falta = calculos_anos(idade, anos_trabalho, anos_em_falta, carreira);
        penalizacao = 6 * anos_em_falta;
    }
    return penalizacao;
}

float    carreira_normal(int idade, int anos_trabalho, int carreira){
    float penalizacao;
    int anos_em_falta;

    penalizacao = 0;
    if (idade > 66){
        printf ("Trabalhador pode reformar-se");
    }
    else if (idade > 60 && anos_trabalho >= 40){
        printf ("Trabalhador pode reformar-se");
    }
    else {
        anos_em_falta = calculos_anos(idade, anos_trabalho, anos_em_falta, carreira);
       printf("anos em falta %i\n", anos_em_falta);
        penalizacao = 6 * anos_em_falta;
    }
    return penalizacao;
}

int main(void){
    float  penalizacao;
    int idade, anos_trabalho, carreira;

    printf("Digite a idade do funcionario: ");
    scanf ("%i", &idade);
    printf("Digite os anos de contribuicao do funcionario: ");
    scanf ("%i", &anos_trabalho);
    printf("Tipo de profissão:\n");
    printf("0 - Normal \n1 - Desgaste rapido\n");
    scanf("%d", &carreira);
    
    penalizacao = 0;
    if (carreira == 0 )
    {
       penalizacao = carreira_normal(idade, anos_trabalho, carreira);
    }  
    else if (carreira == 1)
    {
       penalizacao =  carreira_dasgaste(idade, anos_trabalho, carreira);
    }  
    else {
        printf("Dados invalidos, apenas aceitos 0 e 1");
        exit ;
    } 
    printf("\nPenalização é: %.2f%%", penalizacao);
    return 0;
}