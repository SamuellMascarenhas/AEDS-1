/*O exercício abaixo foi objeto dos exercícios selecionados na semana anterior. Crie uma versão com o
uso da estrutura switch da linguagem C.
Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e
mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir*/

#include <stdio.h>

int main()
{

    int codigo;
    float valorAumento, novoSalario, salario;

    printf("Informe o codigo: ");
    scanf(" %i", &codigo);
    printf("\nInforme o salario atual: ");
    scanf(" %f", &salario);

    switch (codigo)
    {
    case 1:
        valorAumento = salario * 0.50;
        novoSalario = salario + valorAumento;
        printf("Cargo: Escrituario\n");
        break;

    case 2:
        valorAumento = salario * 0.35;
        novoSalario = salario + valorAumento;
        printf("Cargo: Secretario\n");
        break;

    case 3:
        valorAumento = salario * 0.20;
        novoSalario = salario + valorAumento;
        printf("Cargo: Caixa\n");
        break;

    case 4:
        valorAumento = salario * 0.10;
        novoSalario = salario + valorAumento;
        printf("Cargo: Gerente\n");
        break;

    case 5:
        valorAumento = 0;
        printf("Cargo: Diretor\n");
        break;

    default:
        printf("O codigo informado é invalido");
    }
    // Exibir resultados
    printf("Valor do aumento: %.2f\n", valorAumento);
    printf("Novo salário: %.2f\n", novoSalario);

    return 0;
}
