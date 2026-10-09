#include <stdio.h>
#include <stdlib.h>
int main() {
	int hora_filme, min_filme, opcao;

	opção = 9999;
	printf ("Digite a hora inicial do filme: ");
	scanf ("%i", &hora_filme)
	printf ("digite os minutos: ");
	scanf ("%i",&min_filme)
	while(opcao != 0){
		printf("------ MENU ------");
		printf("1 - Vender bilhete");
		printf("2 - Controlo de entrada");
		printf("3 - Estatisticas");
		printf("0 - Sair");
		scanf("%i", &opcao);

		if(opcao == 1 || opcao == 2 || opcao == 3)
			printf("Opção ainda não disponivel");
		else
			printf("Opção invalida");
	}
}