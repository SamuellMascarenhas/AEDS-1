/*Construa uma nova versão para o programa que identifica se é um ano lido bissexto ou não.
O programa deverá permitir ao usuário testar mais que um ano. Para isto, ao final, o programa deverá
enviar uma mensagem ao usuário questionando seu desejo de verificar um novo ano e ler a resposta do
usuário (S/N). De acordo com a resposta lida, uma nova iteração deverá ocorrer ou o programa ser
finalizado.
* O programa deverá rejeitar a leitura de valores diferentes de [S/N]. Caso isto ocorra, o programa
deverá repetir a leitura da resposta do usuário.*/

#include <stdio.h>

int main()
{

    int ano;
    char op;

    do
    {
        printf("Informe o ano: ");
        scanf(" %i", &ano);

        // Verificar se o ano é bissexto
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        {
            printf("O ano %i é bissexto!\n", ano);
        }
        else
        {
            printf("O ano %i não é bissexto!\n", ano);
        }

        // Loop para validar a resposta do usuário
        do
        {
            printf("\nDeseja verificar outro ano? Informe [S] para sim e [N] para não: ");
            scanf(" %c", &op);

            if (op != 's' && op != 'S' && op != 'n' && op != 'N')
            {
                printf("Resposta inválida. Por favor, insira S ou N.\n");
            }

        } while (op != 's' && op != 'S' && op != 'n' && op != 'N');

    } while (op == 's' || op == 'S');

    printf("Obrigado por usar o programa.\n");

    return 0;
}
