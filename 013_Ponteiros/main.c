#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int x = 10;
    int *p;
    p = &x; // p receve o endere�o na mem�ria de x

    printf("O valor de || x = %d\n", x);   // x = 10
    printf("O endere�o de || &x = %d\n", &x); // &x = 6422036
    printf("P recebe o endere�o || p = %d\n", p);   // p = 6422036
    printf("*p = %d\n", *p); // *p = 10 com o endere�o pegar o valor guardado nele ndere�o de p qual � o valor?

    printf("------------Outra parte -----------\n");

    int y = 10;
    int *z;

    z = &y;
    printf("y = %d\n", y); // y = 10
    *z = 12;
    printf("*z = %d\n", *z); // z = 12
    printf("y = %d\n", y); // y =
    return 0;
}
