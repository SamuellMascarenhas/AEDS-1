/*Para cada item desta lista, implemente todas as funções necessárias para implementar sua solução. Ao
planejá-las, analise bem o grau de reusabilidade provido por cada função proposta. Em seguida, construa
uma função principal (main) que permita a você testar sua solução.
Em cada questão, planeje bem:
- qual o tipo de dado gerado pela função ou se o retorno é vazio;
- quais parâmetros precisam ser enviados à função para sua correta execução;
- qual nome melhor descreve o dado gerado (ou a funcionalidade provida) pela função.
1. Calcular a soma de dois valores reai*/

#include <stdio.h>

// Função que calcula a soma de dois valores reais
float soma(float a, float b)
{
    return a + b;
}

int main()
{
    float num1, num2, resultado;

    // Lê os valores do usuário
    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);

    printf("Informe o segundo valor: ");
    scanf("%f", &num2);

    // Calcula a soma
    resultado = soma(num1, num2);

    // Exibe o resultado
    printf("A soma de %.2f e %.2f é: %.2f\n", num1, num2, resultado);

    return 0;
}
