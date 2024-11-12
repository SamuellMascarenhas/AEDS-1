#include <stdio.h>   // Biblioteca padrão para entrada e saída, usada para funções como printf e scanf
#include <stdlib.h>  // Biblioteca padrão C, fornece funcionalidades adicionais
#include <string.h>  // Biblioteca para manipulação de strings, usada para capturar o nome

// Define uma estrutura chamada 'DataNascimento' para armazenar informações sobre a data de nascimento
typedef struct {
    int dia, mes, ano;  // Inteiros para dia, mês e ano da data de nascimento
} DataNascimento;

// Define uma estrutura chamada 'Pessoa' para armazenar informações gerais sobre uma pessoa
typedef struct {
    DataNascimento dataNascimento;  // Inclui uma estrutura 'DataNascimento' dentro de 'Pessoa'
    char nome[50];                  // Array de char para armazenar o nome da pessoa (até 49 caracteres + '\0')
    int idade;                      // Inteiro para armazenar a idade da pessoa
    char sexo;                      // Caractere para armazenar o sexo da pessoa ('M' para masculino, 'F' para feminino, etc.)
} Pessoa;

// Função para exibir informações sobre uma pessoa
void imprimirPessoa(Pessoa p) {
    printf("\nNome: %s", p.nome);   // Exibe o nome
    printf("\nIdade: %d", p.idade); // Exibe a idade
    printf("\nSexo: %c", p.sexo);   // Exibe o sexo
    printf("\nData de nascimento: %02d/%02d/%04d\n", p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano); // Exibe a data de nascimento
}

// Função para coletar as informações de uma pessoa
Pessoa lerPessoa() {
    Pessoa pessoa;

    printf("\nInforme o nome: ");
    fgets(pessoa.nome, 50, stdin);  // Lê o nome com espaços, até 49 caracteres, e armazena na estrutura 'pessoa'

    // Remove o caractere de nova linha deixado pelo fgets
    size_t ln = strlen(pessoa.nome) - 1;
    if (pessoa.nome[ln] == '\n') pessoa.nome[ln] = '\0';

    printf("Informe a idade: ");
    scanf(" %d", &pessoa.idade);    // Lê a idade como inteiro e armazena na estrutura
    getchar();  // Consome o caractere de nova linha deixado pelo scanf

    printf("Informe o sexo [M/F]: ");
    scanf(" %c", &pessoa.sexo);     // Lê o sexo como caractere e armazena na estrutura
    getchar();  // Consome o caractere de nova linha deixado pelo scanf

    printf("Digite sua data de nascimento no formato dd/mm/aaaa: ");
    scanf(" %d/%d/%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano); // Lê e armazena dia, mês e ano da data de nascimento
    getchar();  // Consome o caractere de nova linha deixado pelo scanf

    return pessoa;  // Retorna a estrutura preenchida com os dados da pessoa
}

int main() {
    Pessoa pessoas[3];  // Declara um array do tipo 'Pessoa' para armazenar as informações de 3 pessoas

    // Coleta as informações de cada pessoa
    for (int i = 0; i < 3; i++) {
        printf("\n--- Cadastro da Pessoa %d ---\n", i + 1);
        pessoas[i] = lerPessoa();   // Chama a função para ler os dados e armazena no array
    }

    // Exibe as informações de cada pessoa
    printf("\n--- Informações Cadastradas ---\n");
    for (int i = 0; i < 3; i++) {
        imprimirPessoa(pessoas[i]); // Chama a função para exibir as informações coletadas
    }

    return 0;  // Indica que o programa terminou com sucesso
}
