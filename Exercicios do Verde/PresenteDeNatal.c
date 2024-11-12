#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais
#include <string.h>     // Biblioteca para manipulação de strings

#define MAX_PRESENTES 100  // Define o limite máximo de presentes para evitar overflow de memória

// Estrutura para armazenar o nome de uma pessoa
typedef struct {
    char nome[50]; // Nome da pessoa, limite de até 50 caracteres
} Pessoa;

// Estrutura para armazenar os dados de um presente
typedef struct {
    Pessoa pessoa;       // Pessoa a quem o presente pertence
    char nome[100];      // Nome do presente, com limite de até 100 caracteres
    float preco;         // Preço do presente
    int preferencia;     // Preferência do presente na lista (de 1 a 10)
} Presente;

// Função para cadastrar os dados de um presente
void cadastrarPresente(Presente presente[], int i) {
    getchar(); // Limpa o buffer para evitar problemas com fgets
    printf("\nNome do presente: ");
    fgets(presente[i].nome, 100, stdin); // Lê o nome do presente do usuário

    printf("\nInforme o preço: ");
    scanf(" %f", &presente[i].preco); // Lê o preço do presente

    printf("\nOrdem de Preferência[de 1 a 10]: ");
    scanf(" %i", &presente[i].preferencia); // Lê a preferência do presente (de 1 a 10)
}

// Função para ordenar os presentes com base na preferência, preço e ordem alfabética
void ordenarPresentes(Presente presente[], int NumPresente) {
    for (int i = 0; i < NumPresente - 1; i++) {         // Loop para percorrer cada presente
        for (int j = i + 1; j < NumPresente; j++) {     // Loop para comparar com o próximo presente
            // Critérios de ordenação:
            // 1. Preferência (ordem decrescente)
            // 2. Preço (ordem crescente se preferências são iguais)
            // 3. Ordem alfabética (se preferências e preços são iguais)
            if (presente[i].preferencia < presente[j].preferencia ||
               (presente[i].preferencia == presente[j].preferencia && presente[i].preco > presente[j].preco) ||
               (presente[i].preferencia == presente[j].preferencia && presente[i].preco == presente[j].preco &&
                strcmp(presente[i].nome, presente[j].nome) > 0)) {
                
                // Realiza a troca dos elementos no array
                Presente temp = presente[i];
                presente[i] = presente[j];
                presente[j] = temp;
            }
        }
    }
}

// Função para imprimir a lista de presentes de uma pessoa
void imprimirLista(Pessoa pessoa, Presente presente[], int NumPresente) {
    printf("Lista de %s\n", pessoa.nome); // Exibe o nome do dono da lista
    for (int i = 0; i < NumPresente; i++) {
        printf("%s - R$%.2f\n", presente[i].nome, presente[i].preco); // Exibe cada presente e seu preço
    }
    printf("\n"); // Nova linha para organizar a exibição
}

int main() {
    int NumPresente;                    // Armazena o número de presentes
    Presente presente[MAX_PRESENTES];   // Array de presentes com limite definido
    Pessoa pessoa;                      // Estrutura para armazenar o nome do dono da lista

    // Loop principal para entrada de dados
    while (1) {
        printf("\nNome do dono da lista e quantidade de presentes (ex: Jucilena 3): ");
        // Lê o nome e a quantidade de presentes; se atinge EOF, o loop termina
        if (scanf("%s %d", pessoa.nome, &NumPresente) == EOF) {
            break;
        }

        // Verifica se a quantidade de presentes é válida
        if (NumPresente <= 0 || NumPresente > MAX_PRESENTES) {
            printf("Número inválido de presentes.\n");
            continue; // Reinicia o loop caso a quantidade seja inválida
        }

        // Loop para cadastrar cada presente
        for (int i = 0; i < NumPresente; i++) {
            printf("\nCadastrando presente %d:\n", i + 1); // Indica o número do presente atual
            cadastrarPresente(presente, i); // Chama a função para capturar os dados do presente
        }

        ordenarPresentes(presente, NumPresente); // Ordena os presentes cadastrados
        imprimirLista(pessoa, presente, NumPresente); // Exibe a lista de presentes ordenada
    }
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
