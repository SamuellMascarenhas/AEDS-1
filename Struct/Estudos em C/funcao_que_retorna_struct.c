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
    char nome[50];  // Array de char para armazenar o nome da pessoa (até 49 caracteres + '\0')
    int idade;      // Inteiro para armazenar a idade da pessoa
    char sexo;      // Caractere para armazenar o sexo da pessoa ('M' para masculino, 'F' para feminino, etc.)
} Pessoa;

// Função para exibir informações sobre uma pessoa
void imprimirPessoa(Pessoa p) {
    printf("\nNome: %s", p.nome);   // Exibe o nome
    printf("\nIdade: %d", p.idade); // Exibe a idade
    printf("\nSexo: %c", p.sexo);   // Exibe o sexo
    printf("\nData de nascimento: %d/%d/%d", p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano); // Exibe a data de nascimento
}

// Função para coletar as informações de uma pessoa
Pessoa lerPessoa() {
    Pessoa pessoa;

    printf("\nInforme o nome: ");
    fgets(pessoa.nome, 50, stdin);  // Lê o nome com espaços, até 49 caracteres, e armazena na estrutura 'pessoa'

    printf("\nInforme a idade: ");
    scanf(" %d", &pessoa.idade);  // Lê a idade como inteiro e armazena na estrutura

    printf("\nInforme o sexo[M/F]: ");
    scanf(" %c", &pessoa.sexo);   // Lê o sexo como caractere e armazena na estrutura

    printf("\nDigite sua data de nascimento no formato dd/mm/aaaa: ");
    scanf(" %d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano); // Lê e armazena dia, mês e ano da data de nascimento

    return pessoa;  // Retorna a estrutura preenchida com os dados da pessoa
}

int main() {
    Pessoa pessoa;  // Declara uma variável do tipo 'Pessoa' para armazenar as informações

    pessoa = lerPessoa();      // Chama a função para ler os dados e armazena na variável 'pessoa'
    imprimirPessoa(pessoa);    // Chama a função para exibir as informações coletadas

    return 0;  // Indica que o programa terminou com sucesso
}
