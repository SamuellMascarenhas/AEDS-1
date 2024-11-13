#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct 
{
    char nome [50];
}Pessoa1;

typedef struct 
{
    char nome [50];
}Pessoa2;

bool estruturasIguais (Pessoa1 pessoa1, Pessoa2 pessoa2) {
    if (strcmp(pessoa1.nome, pessoa2.nome) == 0) {
        return true;  // Retorna true se forem iguais
    }
    return false;  // Retorna false se forem diferentes
}


void receberPessoas (Pessoa1 *pessoa1, Pessoa2 *Pessoa2){

    printf("Digite o nome da pessoa 1: ");
    fgets(pessoa1->nome, 50, stdin);
  
    printf("\nDigite o nome da pessoa 2: ");
    fgets(Pessoa2->nome, 50, stdin);
    

}

int main(){
    Pessoa1 pessoa1;
    Pessoa2 pessoa2;

    receberPessoas(&pessoa1, &pessoa2);
       if (estruturasIguais(pessoa1, pessoa2)) {
        printf("\nOs nomes são iguais.\n");
    } else {
        printf("\nOs nomes são diferentes.\n");
    }

    return 0;

}