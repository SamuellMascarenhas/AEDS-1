#include <stdio.h>   // Biblioteca padrão para entrada e saída, usada para funções como printf e scanf
#include <stdlib.h>  // Biblioteca padrão C, fornece funcionalidades adicionais
#include <string.h>  // Biblioteca para manipulação de strings, usada para capturar o nome

// Define uma estrutura chamada 'DataNascimento' para armazenar informações sobre a data de nascimento
typedef struct 
{
    int dia, mes, ano;  // Inteiros para dia, mês e ano da data de nascimento
} DataNascimento;

// Define uma estrutura chamada 'Pessoa' para armazenar informações gerais sobre uma pessoa
typedef struct 
{
    DataNascimento dataNascimento;  // Inclui uma estrutura 'DataNascimento' dentro de 'Pessoa'
    char nome[50];  // Array de char para armazenar o nome da pessoa (até 49 caracteres + '\0')
    int idade;      // Inteiro para armazenar a idade da pessoa
    char sexo;      // Caractere para armazenar o sexo da pessoa ('M' para masculino, 'F' para feminino, etc.)
} Pessoa;

int main() {

    Pessoa pessoa;  // Declara uma variável do tipo 'Pessoa' para armazenar informações de um indivíduo

    // Solicita ao usuário que insira o nome e armazena na estrutura 'pessoa'
    printf("\nInforme o nome: ");
    fgets(pessoa.nome, 50, stdin);  // Usa `fgets` para capturar até 49 caracteres, permitindo espaços no nome

    // Solicita a idade da pessoa e armazena na estrutura
    printf("\nInforme a idade: ");
    scanf(" %d", &pessoa.idade);  // Lê um número inteiro e o armazena na variável 'idade' de 'pessoa'

    // Solicita o sexo da pessoa
    printf("\nInforme o sexo[M/F]: ");
    scanf(" %c", &pessoa.sexo);   // Lê um caractere e o armazena na variável 'sexo' de 'pessoa'

    // Solicita a data de nascimento da pessoa no formato dd/mm/aaaa
    printf("\nDigite sua data de nascimento no formato dd/mm/aaaa: ");
    scanf(" %d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

    // Exibe as informações coletadas
    printf("\nNome: %s", pessoa.nome);   // Exibe o nome
    printf("\nIdade: %d", pessoa.idade); // Exibe a idade
    printf("\nSexo: %c", pessoa.sexo);   // Exibe o sexo
    printf("\nData de nascimento: %d/%d/%d", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano); // Exibe a data de nascimento

    return 0;  // Finaliza o programa com sucesso
}
