#include <stdio.h>

int main(void)
{
    float c, f;
    
    c = 0;
    printf ("Escreva uma tempeatura em Fahrenheint: ");
    scanf ("%f", &f);
    c = (5 * (f-32) / 9);
    printf("A temperatura em Celcius é: %.2f", c);
}