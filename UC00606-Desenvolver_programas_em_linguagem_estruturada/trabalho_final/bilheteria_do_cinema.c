#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int	hora_filme, min_filme, opcao;
	int	idade;
	float preco;

	opcao = 9999;
	idade = -1;
	printf ("Digite a hora inicial do filme: ");
	scanf ("%i", &hora_filme);
	printf ("digite os minutos: ");
	scanf ("%i",&min_filme);
	while (opcao != 0){
		printf ("------ MENU ------\n");
		printf ("1 - Vender bilhete\n");
		printf ("2 - Controlo de entrada\n");
		printf ("3 - Estatisticas\n");
		printf ("0 - Sair\n");
		scanf ("%i", &opcao);

		if (opcao == 1){
			while (idade < 0 || idade > 120){
				printf ("Digite a idade do comprador: \n");
				scanf ("%i", &idade);
			}
			if (idade <= 11)
				preco = 5;
			else if (idade >= 12 && idade <= 64)
				preco = 8;
			else if (idade >=  65)
				preco = 6;
			printf("o valor do bilhete é: %.2f\n", preco);
			idade = -1;
		}
		else if (opcao != 0)
			printf("Opção invalida\n");
	}
}