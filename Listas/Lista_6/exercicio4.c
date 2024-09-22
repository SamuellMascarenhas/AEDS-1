/*Construa um programa que permita identificar o perfil da turma:
- Percentual de homens e de mulheres.
- Percentual de alunos maiores em idade.
- Idade da pessoa mais velha.
- Idade da pessoa mais nova.
Domínio dos dados:
Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
Idade: 0..100
* Deverão ser rejeitados os valores lidos fora do domínio (observe que aqui deve ser utilizada a est. de
rep. com teste no final)
* O número de alunos da turma deverá ser um valor lid*/
#include <stdio.h>

int main()
{
    int i,
        numeroAlunos,
        idade,
        cont_maiores = 0,
        cont_mulheres = 0,
        cont_homens = 0,
        idadeMaisVelho = -1,
        idadeMaisNova = 101;
    char genero;

    printf("Informe a quantidade de alunos presente na turma: ");
    scanf(" %i", &numeroAlunos);

    for (i = 0; i < numeroAlunos; i++)
    {
        do
        {
            printf("Informe o genêro: [F para feminino e M para masculino] ");
            scanf(" %c", &genero);

            if (genero != 'F' && genero != 'f' && genero != 'm' && genero != 'M')
            {
                printf("Informação inválida! Digite F para feminino ou M para masculino.\n");
            }
        } while (genero != 'F' && genero != 'f' && genero != 'm' && genero != 'M');

        do
        {
            printf("Informe a idade: ");
            scanf(" %i", &idade);

            if (idade < 0 || idade > 100)
            {
                printf("Idade invalida!\n");
            }
        } while (idade < 0 || idade > 100);

        // Atualiza contadores de gênero
        if (genero == 'F' || genero == 'f')
        {
            cont_mulheres++;
        }
        else
        {
            cont_homens++;
        }

        // Atualiza contagem de maiores de idade
        if (idade >= 18)
        {
            cont_maiores++;
        }

        // Atualiza a idade mais velha e mais nova
        if (idade > idadeMaisVelho)
        {
            idadeMaisVelho = idade;
        }
        if (idade < idadeMaisNova)
        {
            idadeMaisNova = idade;
        }
    }
    // Cálculo e exibição dos percentuais
    float percentualMulheres = (float)cont_mulheres / numeroAlunos * 100;
    float percentualHomens = (float)cont_homens / numeroAlunos * 100;
    float percentualMaiores = (float)cont_maiores / numeroAlunos * 100;

    printf("Percentual de Mulheres: %.2f%%\n", percentualMulheres);
    printf("Percentual de Homens: %.2f%%\n", percentualHomens);
    printf("Percentual de Maiores de Idade: %.2f%%\n", percentualMaiores);
    printf("Idade da pessoa mais velha: %d\n", idadeMaisVelho);
    printf("Idade da pessoa mais nova: %d\n", idadeMaisNova);
    return 0;
}
