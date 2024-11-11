/*Construa um programa que leia um conjunto de n valores inteiros e positivos, sendo n também um valor
lido. O programa deverá calcular e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.
Rejeitar a leitura de valores inválidos.
* Rejeitar a leitura de valores inválidos quando isto se mostrar necessário*/

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{ // Início da função principal

    int n, numero;                      // Declaração das variáveis n (quantidade de valores) e numero (cada valor lido)
    int contPares = 0, contImpares = 0; // Contadores para números pares e ímpares

    // Loop para garantir que o usuário forneça um número válido para n
    do
    {
        printf("Informe a quantidade de valores: "); // Solicita ao usuário a quantidade de valores
        scanf("%i", &n);                             // Lê o valor de n

        if (n < 0)
        {                              // Verifica se n é negativo
            printf("Número invalido"); // Mensagem de erro
        }
    } while (n < 0); // Continua pedindo até que n seja não-negativo

    // Loop para ler n valores
    for (int i = 0; i < n; i++)
    { // Inicializa i em 0 e repete até que i seja igual a n
        do
        {
            printf("Informe um número inteiro e positivo: "); // Solicita um número inteiro positivo
            scanf(" %i", &numero);                            // Lê o número informado

            if (numero < 0)
            {                               // Verifica se o número é negativo
                printf("Numero invalido!"); // Mensagem de erro
            }
        } while (numero < 0); // Continua pedindo até que um número válido seja fornecido

        // Verifica se o número é par ou ímpar
        if (numero % 2 == 0)
        {                // Se o número for divisível por 2
            contPares++; // Incrementa o contador de pares
        }
        else
        {
            contImpares++; // Caso contrário, incrementa o contador de ímpares
        }
    }

    // Exibir resultados
    printf("Quantidade de números pares: %d\n", contPares);     // Exibe a quantidade de números pares
    printf("Quantidade de números ímpares: %d\n", contImpares); // Exibe a quantidade de números ímpares
}
}
