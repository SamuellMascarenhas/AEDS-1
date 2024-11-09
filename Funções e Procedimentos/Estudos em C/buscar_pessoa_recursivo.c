#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PESSOAS 3 // Número de pessoas para o exemplo

// Definindo a estrutura Pessoa
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Função recursiva para buscar a pessoa
int buscarPessoaRecursiva(Pessoa pessoas[], int tamanho, char nome[], int idade) {
    // Condição base: se o array foi percorrido completamente
    if (tamanho == 0) {
        return -1; // Pessoa não encontrada
    }

    // Verifica se a pessoa atual coincide com a busca
    if (strcmp(pessoas[tamanho - 1].nome, nome) == 0 && pessoas[tamanho - 1].idade == idade) {
        return tamanho - 1; // Retorna o índice da pessoa encontrada
    }

    // Chamada recursiva, reduzindo o tamanho do array
    return buscarPessoaRecursiva(pessoas, tamanho - 1, nome, idade);
}

int main() {
    Pessoa pessoas[NUM_PESSOAS] = {
        {"Carlos", 30},
        {"Ana", 25},
        {"Maria", 40}
    };
    char nomeBusca[50];
    int idadeBusca;

    // Entrada de dados do usuário para busca
    printf("Informe o nome da pessoa que deseja buscar: ");
    scanf("%s", nomeBusca);
    printf("Informe a idade: ");
    scanf("%d", &idadeBusca);

    // Busca recursiva
    int indiceEncontrado = buscarPessoaRecursiva(pessoas, NUM_PESSOAS, nomeBusca, idadeBusca);

    if (indiceEncontrado != -1) {
        printf("\nPessoa encontrada!\n");
        printf("Nome: %s\n", pessoas[indiceEncontrado].nome);
        printf("Idade: %d\n", pessoas[indiceEncontrado].idade);
    } else {
        printf("\nPessoa não encontrada!\n");
    }

    return 0;
}
