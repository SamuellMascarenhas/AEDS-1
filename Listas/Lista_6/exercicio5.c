/*Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)*/

#include <stdio.h>

int main() {
    int nota;
    int totalAlunos = 0;
    int aprovados = 0;
    int reprovados = 0;

    while (1) {
        printf("Informe a nota do aluno (0 para sair): ");
        scanf("%i", &nota);

        // Verifica se a nota é a flag para sair
        if (nota == 0) {
            break;
        }

        // Verifica se a nota está dentro do domínio
        if (nota < 0 || nota > 100) {
            printf("Nota inválida! Digite uma nota entre 0 e 100.\n");
            continue; // Volta para o início do loop
        }

        // Incrementa o total de alunos
        totalAlunos++;

        // Verifica se o aluno foi aprovado ou reprovado
        if (nota >= 60) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    // Calcula e exibe os percentuais
    if (totalAlunos > 0) {
        float percentualAprovados = (float)aprovados / totalAlunos * 100;
        float percentualReprovados = (float)reprovados / totalAlunos * 100;

        printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados);
        printf("Percentual de alunos reprovados: %.2f%%\n", percentualReprovados);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}
