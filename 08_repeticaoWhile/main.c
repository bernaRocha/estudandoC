#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int contador = 0;
    float valor, media, total;
    total = 0;
    printf("Digite as notas para ser contado a m�dia. \n");

    scanf("%f", &valor);
    while( valor != -1){
        total = total + valor;
        contador++;
        printf("Digite um valor (-1 para encerrar):");
        scanf("%f", &valor);
    }

    media = total / contador;
    printf("A m�dia das notas �: %.1f\n", media);
    return 0;
}
