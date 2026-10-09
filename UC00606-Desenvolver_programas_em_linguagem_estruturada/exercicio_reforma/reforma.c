#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int	calculos_anos (int idade, int anos_trabalho, int carreira){
	int idade_a, idade_b, idade_c, anos_restantes, anos_restantes_a, regrac, regrab;
	if (carreira == 0){
		idade_a = 67 - idade;
		idade_b = 61 - idade;
		anos_restantes = 40 - anos_trabalho;
		if(idade_b > anos_restantes)
			regrab = idade_b;
		else
			regrab = anos_restantes;
		if (idade_a < regrab)
			return (idade_a);
		else
			return (regrab);
		
	}
	else if(carreira == 1){
		idade_a = 67 - idade;
		idade_b = 56 - idade;
		idade_c = 51 - idade;
		anos_restantes = 40 - anos_trabalho;
		anos_restantes_a = 30 - anos_trabalho;
		if (idade_b > anos_restantes_a)
			regrab = idade_b;
		else 
			regrab = anos_restantes_a;
		if(idade_c > anos_restantes)
			regrac = idade_c;
		else
			regrac = anos_restantes;
		if(idade_a < regrab && idade_a < regrac)
			return (idade_a);
		else if (regrab < regrac)
			return (regrab);
		else
			return (regrac);
	}
	else{
		printf ("Error");
		exit(1);
	}
}

float	carreira_dasgaste(int idade, int anos_trabalho, int carreira){
	float penalizacao;
	int anos_em_falta;

	if (idade > 56 && anos_trabalho >= 30){
		printf ("Trabalhador pode reformar-se");
	}
	else if (idade > 51 && anos_trabalho >= 40){
		printf ("Trabalhador pode reformar-se");
	}
	else {
		anos_em_falta = calculos_anos(idade, anos_trabalho, carreira);
		penalizacao = 6 * anos_em_falta;
	}
	printf("ANOS EM FALTA %i", anos_em_falta);
	return penalizacao;
}

float	carreira_normal(int idade, int anos_trabalho, int carreira){
	float penalizacao;
	int anos_em_falta;

	anos_em_falta = 0;
	penalizacao = 0;
	if (idade > 60 && anos_trabalho >= 40){
		printf ("Trabalhador pode reformar-se");
	}
	else {
		anos_em_falta = calculos_anos(idade, anos_trabalho, carreira);
		printf("anos em falta %i\n", anos_em_falta);
		penalizacao = 6 * anos_em_falta;
	}
	printf("ANOS EM FALTA %i", anos_em_falta);
	return penalizacao;
}

int	main(void){
	float penalizacao;
	int idade, anos_trabalho, carreira;

	printf("Digite a idade do funcionario: ");
	scanf ("%i", &idade);
	printf("Digite os anos de contribuicao do funcionario: ");
	scanf ("%i", &anos_trabalho);
	printf("Tipo de profissão:\n");
	printf("0 - Normal \n1 - Desgaste rapido\n");
	scanf("%d", &carreira);
	
	penalizacao = 0;
	if (idade > 67){
		printf ("Trabalhador pode reformar-se\n");
	}
	else if (carreira == 0 )
	{
	   penalizacao = carreira_normal(idade, anos_trabalho, carreira);
	}  
	else if (carreira == 1)
	{
	   penalizacao =  carreira_dasgaste(idade, anos_trabalho, carreira);
	}  
	else {
		printf("Dados invalidos, apenas aceitos 0 e 1");
		exit(1);
	} 
	printf("\nPenalização é: %.2f%%", penalizacao);
	return 0;
}




