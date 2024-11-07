#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PESSOAS 3 // Número de pessoas para o exemplo

// Definindo a estrutura Pessoa
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Função iterativa para buscar a pessoa
int buscarPessoaIterativa(Pessoa pessoas[], int tamanho, char nome[], int idade) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(pessoas[i].nome, nome) == 0 && pessoas[i].idade == idade) {
            return i; // Retorna o índice da pessoa encontrada
        }
    }
    return -1; // Retorna -1 se a pessoa não for encontrada
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

    // Busca iterativa
    int indiceEncontrado = buscarPessoaIterativa(pessoas, NUM_PESSOAS, nomeBusca, idadeBusca);

    if (indiceEncontrado != -1) {
        printf("\nPessoa encontrada!\n");
        printf("Nome: %s\n", pessoas[indiceEncontrado].nome);
        printf("Idade: %d\n", pessoas[indiceEncontrado].idade);
    } else {
        printf("\nPessoa não encontrada!\n");
    }

    return 0;
}
