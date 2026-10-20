//JESSICA DALLÓ, A, B , C

#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int	hora_filme, min_filme, hora_atual, min_atual, atual, inicio, opcao;
	int	idade, mais_novo, mais_velho, lotacao, estudante, semana;
	int	 bilhetes_crianca, bilhetes_adulto, bilhetes_senior;
	float	preco, total_faturado, soma_idades, total_bilhetes;
	
	opcao = 1;
	idade = -1;
	soma_idades = 0;
	mais_novo = 999;
	mais_velho = 999;
	total_bilhetes = 0;
	lotacao = 0;
	bilhetes_senior = 0;
	bilhetes_adulto = 0;
	bilhetes_senior = 0;
	total_faturado = 0;
	
	// introdução de horas e minutos 
	printf ("Digite o dia da semana: \n");
	printf ("1 = SEGUNDA / 2 = TERÇA / 3 = QUARTA / 4 = QUINTA / 5 = SEXTA / 6 = SABADO / 7 = DOMINGO\n");
	while (scanf("%d", &semana) != 1 || semana <= 0 || semana >= 7){
		printf ("Dia da semana invalido!\nPorfavor digite novamente.\n");
		printf ("Digite o dia da semana: \n");
		printf ("1 = SEGUNDA / 2 = TERÇA / 3 = QUARTA / 4 = QUINTA / 5 = SEXTA / 6 = SABADO / 7 = DOMINGO\n ");
		while (getchar() != '\n');
	}
	printf ("Digite a hora inicial do filme: ");
	while (scanf("%d", &hora_filme) != 1 || hora_filme < 0 || hora_filme >= 24){
		printf ("Hora invalida!\nPorfavor digite novamente.\n");
		printf ("Digite a hora inicial do filme: ");
		while (getchar() != '\n');
	}
	printf ("Digite os minutos: ");
	while (scanf("%d", &min_filme) != 1 || min_filme < 0 || min_filme >= 60){
		printf ("Minuto invalido!\nPorfavor digite novamente.\n");
		printf ("Digite os minutos: ");
		while (getchar() != '\n');
	}
	printf ("Digite quantos lugares tem na sala: ");
	while (scanf ("%i",&lotacao) != 1 || lotacao <= 0){
		printf ("Valor inválido!\nPorfavor digite novamente.\n");
		printf ("Digite quantos lugares tem na sala: ");
		while (getchar() != '\n');
	}

	//menu bilheteira
		while (opcao != 0){
			printf ("------ MENU ------\n");
			printf ("1 - Vender bilhete\n");
			printf ("2 - Controlo de entrada\n");
			printf ("3 - Estatisticas\n");
			printf ("0 - Sair\n");
			scanf ("%i", &opcao);
	//opção 1 do menu 
			if (opcao == 1 && lotacao != total_bilhetes){
				while (idade < 0 || idade > 120){
					printf ("Digite a idade do comprador: \n");
					scanf ("%i", &idade);
				}
				if (idade <= 11){
					if (semana == 2){
						preco = 5 - (5 * 0.20);
						printf ("O escalão é criança (TERÇA-FEIRA), O valor do bilhete é: %.2f\n", preco);
					}
					else{
						preco = 5;
						printf ("O escalão é criança, O valor do bilhete é: %.2f\n", preco);
					}
					bilhetes_crianca++;
				}
				else if (idade >= 12 && idade <= 64){
					if (idade >= 12 && idade <= 25){
						printf ("Tem cartão de estudante?: (1 = Sim, 0 = Não) ");
						scanf ("%i", &estudante);
						if (estudante != 1 && estudante !=0){
							printf("Opção inválida\n\n");
						}
						else if (estudante == 1 && semana != 2){
							preco = 6.50;
							printf ("O escalão é Adulto (ESTUDANTE), O valor do bilhete é: %.2f\n", preco);
						}
						else if (estudante == 1 && semana == 2){
							preco = 6.50 -( 6.50 * 0.20);
							printf ("O escalão é Adulto (ESTUDANTE / TERÇA), O valor do bilhete é: %.2f\n", preco);
						}
						else if (estudante == 0){
							if (semana == 2){
							preco = 8 - (8 * 0.20);
							printf ("O escalão é Adulto (TERÇA-FEIRA), O valor do bilhete é: %.2f\n", preco);
							}
							else{
								preco = 8;
								printf ("O escalão é Adulto, O valor do bilhete é: %.2f\n", preco);
							}
						}
					}
					else {
						if (semana == 2){
						preco = 8 - (8 * 0.20);
						printf ("O escalão é Adulto (TERÇA-FEIRA), O valor do bilhete é: %.2f\n", preco);
						}
						else{
							preco = 8;
							printf ("O escalão é Adulto, O valor do bilhete é: %.2f\n", preco);
						}
					bilhetes_adulto++;
					}
				}
				else if (idade >=  65){
					if (semana == 2){
						preco = 6 - (6 * 0.20);
						printf ("O escalão é Senior (TERÇA), O valor do bilhete é: %.2f\n", preco);
					
					}
					else {
						preco = 6;
						printf ("O escalão é Senior, O valor do bilhete é: %.2f\n", preco);
					}
					bilhetes_senior++;
				}
				total_faturado = total_faturado + preco;
				soma_idades = soma_idades + idade;
				total_bilhetes++;
				if (mais_novo == 999){
					mais_novo = idade;
					mais_velho = idade;
				}
				else if (mais_novo > idade)
					mais_novo = idade;
				else if (mais_velho < idade)
					mais_velho = idade;
				idade = -1;//para voltar a entrar no while quando idade for valida
			}
			else if (lotacao == total_bilhetes && opcao == 1)
				printf ("Sala esgotada\n");
	//opção 2 do menu 
			else if (opcao == 2){
				printf("Hora atual: ");
				while (scanf("%i", &hora_atual) != 1|| hora_atual < 0 || hora_atual>= 24){
					printf ("Hora invalida!\nPorfavor digite novamente.\n");
					printf ("Hora atual: ");
					while (getchar() != '\n'); //scanf devolve 1 ou 0  1 == sucesso 0 usuario digitou errado - 1 erro de leitura
				}
				printf("Minuto atual: ");
				while (scanf("%i", &min_atual) != 1 || min_atual < 0 || min_atual >= 60){
					printf ("Minuto invalido!\nPorfavor digite novamente.\n");
					printf ("Digite os minutos atual: ");
					while (getchar() != '\n');
				}
				atual = (hora_atual * 60) + min_atual;
				inicio = (hora_filme * 60) + min_filme;
				if (atual >= inicio - 30 && atual <= inicio + 15) 
					printf("Pode entrar na sala.\n");
				else if (inicio - atual > 30) 
					printf("Ainda é cedo. Aguarde %i minutos.\n", ((inicio -30) - atual));
				else 
					printf("Nao pode entrar na sala.\n");
			}
	//opção 3 e 0 do menu 
			else if (opcao == 3 || opcao == 0){
				if ((bilhetes_crianca + bilhetes_adulto + bilhetes_senior) == 0)
					printf ("Ainda não foram vendidos bilhetes.\n");
				if (opcao == 0){
					printf ("Tem a certeza que quer sair? (1 = Sim, 0 = Não) ");
					scanf ("%i", &opcao);
					if (opcao != 1 && opcao !=0){
						printf("Opção inválida\n\n");
						opcao = 1;
						continue; // vai para o inicio e começa um novo ciclo
					}
					if (opcao == 1)
						opcao = 4;
				}
				if (opcao == 3 || opcao == 4){
					if(total_bilhetes == 0)
						printf ("Não há dados, não foram vendidos Bilhetes\n");
					else {
						printf ("\nTotal de bilhetes vendidos: %.2f\n", total_bilhetes);
						printf ("Total de lugares vagos na sala: %.0f\n", lotacao - total_bilhetes);
						printf ("Taxa de lotação: %.2f%%\n", (total_bilhetes * 100)/lotacao);
						printf ("O valor total faturado: %.2f\n", total_faturado);
						printf ("Os bilhetes criança são: %i\n", bilhetes_crianca);
						printf ("Os bilhetes Adulto são: %i\n", bilhetes_adulto);
						printf ("Os bilhetes Senior são: %i\n", bilhetes_senior);
						printf ("A média de idade é: %.2f\n", (soma_idades/total_bilhetes));
						printf ("O cliente mais novo tem a idade: %i\n", mais_novo);
						printf ("O cliente mais velho tem a idade: %i\n", mais_velho);
					}
				}
				if (opcao == 4)
					exit(0);
				else
					opcao = 1;
			}
			else if (opcao != 0)
				printf("Opção invalida\n");
		}
	return (0);
}