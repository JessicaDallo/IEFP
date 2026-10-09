#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;
    media = 0;
    
    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite a terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    if (media == 10){
        printf ("Aluno aprovado com louvor! Parabens! nota: %.2f", media);
    }
    else if (media >= 7){
        printf ("Aluno aprovado! Parabéns! nota: %.2f", media);
    }
    else if (media < 7){
        printf("Aluno reprovado! Temos que conversar! nota: %.2f", media);
    }
    return 0;
}