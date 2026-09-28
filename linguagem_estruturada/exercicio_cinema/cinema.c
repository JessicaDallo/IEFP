#include <stdio.h>

int main(void) {
    int hora_atual, minuto_atual;
    int hora_inicio, minuto_inicio;
    int atual, inicio;

    printf("Hora atual: ");
    scanf("%i", &hora_atual);

    printf("Minuto atual: ");
    scanf("%i", &minuto_atual);

    printf("Hora inicio do filme: ");
    scanf("%i", &hora_inicio);

    printf("Minuto inicio do filme: ");
    scanf("%i", &minuto_inicio);

    // Converter horas para minutos
    atual = (hora_atual * 60) + minuto_atual;
    inicio = (hora_inicio * 60) + minuto_inicio;

    // Verificar se está no intervalo permitido
    if (atual >= inicio - 30 && atual <= inicio + 15) {
        printf("Pode entrar na sala.\n");
    }
    else if (inicio - atual > 30) {
        printf("Ainda faltam mais de 30 minutos.\n");
    }
    else {
        printf("Nao pode entrar na sala.\n");
    }

    return 0;
}

