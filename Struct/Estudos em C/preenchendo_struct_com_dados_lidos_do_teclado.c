#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída, usada para funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C, que fornece funcionalidades adicionais
#include <string.h>  // Inclui a biblioteca para manipulação de strings, usada aqui para capturar o nome

// Define uma estrutura chamada 'Pessoa' que armazena informações sobre uma pessoa
typedef struct 
{
    char nome[50];  // Armazena o nome da pessoa (até 49 caracteres + '\0' para o terminador de string)
    int idade;      // Armazena a idade da pessoa como um valor inteiro
    char sexo;      // Armazena o sexo da pessoa como um único caractere ('M' para masculino, 'F' para feminino, etc.)
} Pessoa;

int main (){

    Pessoa pessoa;  // Declara uma variável do tipo 'Pessoa', chamada 'pessoa', para armazenar as informações de um indivíduo

    // Solicita ao usuário que insira o nome da pessoa e armazena na estrutura
    printf("\nInforme o nome: ");
    fgets(pessoa.nome, 50, stdin);  // Lê até 49 caracteres e armazena na string 'nome' de 'pessoa'

    // A função `fgets` lê uma linha de entrada do usuário, incluindo espaços, até o limite especificado (50).
    // Essa função é usada aqui para permitir a captura de nomes completos, já que `scanf` comum para strings
    // não lê espaços (ex. "Ana Maria").

    // Solicita ao usuário que insira a idade da pessoa
    printf("\nInforme a idade: ");
    scanf(" %d", &pessoa.idade);  // Lê um número inteiro e armazena na variável 'idade' da estrutura

    // Nota: A idade é armazenada como um número inteiro, então aqui `scanf` é usado para capturar um valor numérico.
    // O operador `&` é usado para passar o endereço da variável `pessoa.idade` para que `scanf` armazene o valor diretamente lá.

    // Solicita ao usuário que insira o sexo da pessoa
    printf("\nInforme o sexo[M/F]: ");
    scanf(" %c", &pessoa.sexo);   // Lê um único caractere e armazena na variável 'sexo' da estrutura

    // Explicação: No `scanf` com `%c`, a leitura de um caractere pode ser sensível a caracteres residuais,
    // como a nova linha ('\n') deixada pelo `scanf` anterior. Colocamos um espaço antes de `%c` para garantir
    // que ele ignore espaços ou novas linhas no buffer de entrada.

    // Exibe as informações armazenadas na estrutura 'pessoa' na tela
    printf("\nNome: %s", pessoa.nome);   // Mostra o nome da pessoa
    printf("\nIdade: %d", pessoa.idade); // Mostra a idade da pessoa
    printf("\nSexo: %c", pessoa.sexo);   // Mostra o sexo da pessoa

    return 0;  // Indica que o programa terminou com sucesso
}
