/*Construa uma função recursiva que escreva em ordem decrescente os inteiros de N até 0.
Argumento da função: um inteiro relativo ao valor de N.
Retorno: vazio
Teste a sua função a partir da função principal. Planeje uma função específica para ler do teclado o
valor de N*/

#include <stdio.h>

// Função recursiva para imprimir a sequência decrescente de N até 0
void imprimirDecrescente(int n)
{
    if (n < 0)
    {
        return; // Caso base: quando n for menor que 0, parar a recursão
    }

    printf("%d ", n);           // Imprimir o valor de n
    imprimirDecrescente(n - 1); // Chamada recursiva com n - 1
}

// Função para ler o valor de N do teclado
int lerValorN()
{
    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    return n;
}

int main()
{
    // Ler o valor de N
    int n = lerValorN();

    // Chamar a função recursiva para imprimir a sequência decrescente
    imprimirDecrescente(n);

    printf("\n"); // Adicionar uma nova linha após a sequência

    return 0;
}
