#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int	hora_filme, min_filme, hora_atual, min_atual, atual, inicio, opcao;
	int	idade;
	int	 bilhetes_crianca, bilhetes_adulto, bilhetes_senior;
	float	preco, total_faturado, soma_idades, total_bilhetes;

	opcao = 9999; //numero apenas para certeza de inciar o looping
	idade = -1;
	soma_idades = 0;
	total_bilhetes = 0;
	bilhetes_senior = 0;
	bilhetes_adulto = 0;
	bilhetes_senior = 0;
	total_faturado = 0;
	printf("Hora atual: ");
	scanf("%i", &hora_atual);
	while (hora_atual < 0 || hora_atual>= 24){
		printf ("Hora invalida!\nPorfavor digite novamente.\n");
		printf ("Hora atual: ");
		scanf ("%i", &hora_atual);
	}
	printf("Minuto atual: ");
	scanf("%i", &min_atual);
	while (min_atual < 0 || min_atual >= 60){
		printf ("Minuto invalido!\nPorfavor digite novamente.\n");
		printf ("Digite os minutos atual: ");
		scanf ("%i",&min_atual);
	}
	printf ("Digite a hora inicial do filme: ");
	scanf ("%i", &hora_filme);
	while (hora_filme < 0 || hora_filme >= 24){
		printf ("Hora invalida!\nPorfavor digite novamente.\n");
		printf ("Digite a hora inicial do filme: ");
		scanf ("%i", &hora_filme);
	}
	printf ("Digite os minutos: ");
	scanf ("%i",&min_filme);
	while (min_filme < 0 || min_filme >= 60){
		printf ("Minuto invalido!\nPorfavor digite novamente.\n");
		printf ("Digite os minutos: ");
		scanf ("%i",&min_filme);
	}
	// Converter horas para minutos
	atual = (hora_atual * 60) + min_atual;
	inicio = (hora_filme * 60) + min_filme;
	if (atual >= inicio - 30 && atual <= inicio + 15) {
		printf("Pode entrar na sala.\n");
	
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
				soma_idades = soma_idades + idade;
				idade = -1;//para voltar a entrar no while quando idade for valida
			}
			else if (opcao == 3 || opcao == 0){
				if ((bilhetes_crianca + bilhetes_adulto + bilhetes_senior) == 0)
					printf ("Ainda não foram vendidos bilhetes.\n");
				else{
					total_bilhetes = (bilhetes_crianca + bilhetes_adulto + bilhetes_senior);
					printf ("total de bilhetes vendidos: %.2f\n", total_bilhetes);
					printf ("o valor total faturado: %.2f\n", total_faturado);
					printf ("os bilhetes criança são: %i\n", bilhetes_crianca);
					printf ("os bilhetes Adulto são: %i\n", bilhetes_adulto);
					printf ("os bilhetes Senior são: %i\n", bilhetes_senior);
					printf ("a média de idade é: %.2f\n", (soma_idades/total_bilhetes));
				}
				if (opcao == 0)
					exit;
			}
			else if (opcao != 0)
				printf("Opção invalida\n");
		}
	}
	else if (inicio - atual > 30) {//voltar pedir a hora??
		printf("Ainda é cedo. Aguarde %i minutos.\n", ((inicio -30) - atual));
	}
	else {
		printf("Nao pode entrar na sala.\n");
	}
	return (0);
}