
/*Em cada caso, observar com atenção qual a estrutura de repetição mais adequada para a construção do
laço (loop).
1. Calcular e escrever o valor de H, sendo H igual a:
H = 1/1 + 1/3 + 1/9 + 1/27 + ...
H com precisão de N termos, sendo N um valor lido.
Obs: não se esqueça que o operador de divisão em C é sobrecarregado: divisão inteira e divisão real – a
operação é definida em termos do tipo dos operandos*/
#include <stdio.h>

int main()
{
    int N;
    double H = 0.0; // Use double para precisão
    // Leia o valor de N
    printf("Informe o número de termos (N): ");
    scanf("%d", &N);

    // Verifique se N é válido
    if (N <= 0)
    {
        printf("N deve ser um número positivo.\n");
        return 1; // Saia do programa se N não for válido
    }

    // Loop para calcular H
    for (int i = 0; i < N; i++)
    {
        H += 1.0 / (1 << (2 * i)); // 1 << (2 * i) é 3^i
    }

    // Exibir o resultado
    printf("O valor de H é: %f\n", H);

    return 0;
}
