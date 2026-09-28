#include <stdio.h>

int main(void)
{
   int c1, c2, c3, votantes, cont, voto;
   
   votantes = 0;
   cont = 1;
   c1 = 0;
   c2 = 0;
   c3 = 0;
   printf("Digite quantas pessoas vão votar: ");
   scanf("%i", &votantes);
   while(cont <= votantes){
        printf("Digite seu voto: ");
        scanf("%i", &voto);
        if(voto == 1){
            c1 = c1 + 1;
        }
        else if (voto == 2){
            c2 = c2 + 1;
        }
        else if (voto == 3){
            c3 = c3 + 1;
        }
        else{
            printf("digito inválido\n");
        }
        if(voto == 1 || voto == 2 || voto == 3){
            cont++;
        }
   }
   printf("votos do candidato 1: %i\n", c1);
   printf("votos do candidato 2: %i\n", c2);
   printf("votos do candidato 3: %i\n", c3);
   return 0;
}