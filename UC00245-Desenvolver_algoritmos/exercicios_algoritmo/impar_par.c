#include <stdio.h>

int main(void)
{
    int num;
    printf ("digite um número: ");
    scanf ("%i", &num);
    if (num % 2 == 0){
        printf("\n%i, é um numero par\n", num);
    }
    else {
        printf("%i, é um numero impar\n", num);
    }
    if (num < 0){
        printf("%i, é um numero negativo", num);
    }
    else {
        printf("%i, é um numero positivo", num);
    }
    return 0;
}