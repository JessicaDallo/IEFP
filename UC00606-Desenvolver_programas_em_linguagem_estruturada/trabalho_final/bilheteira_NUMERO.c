#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int	hora_filme, min_filme, opcao;
	int	idade;
	int	 bilhetes_crianca, bilhetes_adulto, bilhetes_senior;
	float	preco, total_faturado;

	opcao = 9999; //numero apenas para certeza de inciar o looping
	idade = -1;
	bilhetes_senior = 0;
	bilhetes_adulto = 0;
	bilhetes_senior = 0;
	total_faturado = 0;
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
			if (idade <= 11){
				preco = 5;
				bilhetes_crianca++;
				printf ("O escalão é criança, O valor do bilhete é: %.2f\n", preco);
			}
			else if (idade >= 12 && idade <= 64){
				preco = 8;
				bilhetes_adulto++;
				printf ("O escalão é Adulto, O valor do bilhete é: %.2f\n", preco);
			}
			else if (idade >=  65){
				preco = 6;
				bilhetes_senior++;
				printf ("O escalão é Senior, O valor do bilhete é: %.2f\n", preco);
			}
			total_faturado = total_faturado + preco;
			idade = -1;//para voltar a entrar no while quando idade for valida
		}
		else if (opcao == 3 || opcao == 0){
			if ((bilhetes_crianca + bilhetes_adulto + bilhetes_senior) == 0)
				printf ("Ainda não foram vendidos bilhetes.\n");
			else{
				printf ("total de bilhetes vendidos: %i\n", bilhetes_crianca + bilhetes_adulto + bilhetes_senior);
				printf ("o valor total faturado: %.2f\n", total_faturado);
				printf ("os bilhetes criança são: %i\n", bilhetes_crianca);
				printf ("os bilhetes Adulto são: %i\n", bilhetes_adulto);
				printf ("os bilhetes Senior são: %i\n", bilhetes_senior);
			}
			if (opcao == 0)
				exit;
		}
		else if (opcao != 0)
			printf("Opção invalida\n");
	}
	return (0);
}