#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)
#include <string.h>  // Inclui a biblioteca para manipulação de strings, usada para copiar texto com strcpy

// Define uma estrutura chamada 'Pessoa' que armazena informações de uma pessoa
typedef struct 
{
    char nome[50];  // Armazena o nome da pessoa (até 49 caracteres mais o terminador '\0')
    int idade;      // Armazena a idade da pessoa
    char sexo;      // Armazena o sexo da pessoa ('M' para masculino, 'F' para feminino, etc.)
} Pessoa;

int main(){
    Pessoa pessoa;  // Declara uma variável do tipo 'Pessoa'

    // Atribui valores aos campos da estrutura 'pessoa'
    pessoa.idade = 22;                 // Define a idade como 22
    pessoa.sexo = 'M';                 // Define o sexo como 'M' (masculino)
    strcpy(pessoa.nome, "Samuell");    // Copia o nome "Samuell" para o campo 'nome' de 'pessoa'

    // Exibe as informações armazenadas na estrutura 'pessoa'
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Sexo: %c", pessoa.sexo);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
