#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escreveNome(); // prot�tipo de fun��o
int main()
{
    setlocale(LC_ALL, "");
    escreveNome();
    return 0;
}

void escreveNome(){
    char nome[50];
    printf("Me diga seu nome: \n");

    // Leitura de string para nomes compostos
    fgets(nome, 50, stdin);

    // %c se fosse s� um car�ctere > comando para nome �nico
    //scanf("%s", nome);

    printf("Bem vindo � Boson Treinamentos em Tecnologia %s\n", nome);
    return 0;
}
