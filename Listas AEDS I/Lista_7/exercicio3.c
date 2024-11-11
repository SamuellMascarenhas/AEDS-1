/*Ler um número natural e verificar se é ele primo ou não. Um número natural é primo se é ele divisível
apenas por um e por si próprio.
Lembre-se que o conjunto dos números naturais é composto pelos valores inteiros e positivos.
Rejeitar a leitura de número inválido (não pertencente ao conjunto de números naturais).
Ao finalizar, permitir verificar um novo número, até que um número igual a zero (flag) seja fornecido.
Informar ao usuário ser o valor zero aquele que encerrará o programa*/

#include <stdio.h>

int main()
{
    int numero;

    while (1)
    {
        printf("Digite um número natural (0 para sair): ");
        scanf("%d", &numero);

        // Encerrar se o número for 0
        if (numero == 0)
        {
            printf("Programa encerrado.\n");
            break;
        }

        // Validar se é um número natural
        if (numero < 1)
        {
            printf("Número inválido! Por favor, insira um número natural.\n");
            continue; // Volta ao início do loop
        }

        // Verificação de primo
        int primo = 1; // Assume que é primo
        for (int i = 2; i * i <= numero; i++)
        { // Verifica até a raiz quadrada
            if (numero % i == 0)
            {
                primo = 0; // Não é primo
                break;     // Sai do loop
            }
        }

        // Resultado
        if (primo)
        {
            printf("%d é um número primo.\n", numero);
        }
        else
        {
            printf("%d não é um número primo.\n", numero);
        }
    }

    return 0;
}
