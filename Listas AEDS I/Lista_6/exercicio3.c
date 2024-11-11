/*Considere uma turma com n alunos, sendo n um valor lido. Construa um programa que leia as notas
obtidas pelos alunos [0..100]. Para cada nota lida, o programa deverá informar estar o aluno aprovado ou
não, sabendo ser sessenta a nota mínima requerida para aprovação. Ao final, o programa deverá informar
a nota média da turma, bem como a maior e a menor nota da turma.
Ao ler a nota de um aluno, rejeitar a leitura de nota inválida, sabendo ser cem a nota máxima*/

#include <stdio.h>

int main() {
    int n, i;
    float nota, soma = 0, media;
    float maior = 0, menor = 100;

    // Ler o número de alunos
    printf("Informe o número de alunos: ");
    scanf("%d", &n);

    // Loop para ler as notas de cada aluno
    for(i = 0; i < n; i++) {
        do {
            printf("Informe a nota do aluno %d (0 a 100): ", i + 1);
            scanf("%f", &nota);

            // Validação da nota
            if(nota < 0 || nota > 100) {
                printf("Nota inválida! Insira um valor entre 0 e 100.\n");
            }
        } while(nota < 0 || nota > 100); // Repete até uma nota válida ser inserida

        // Verificar se o aluno está aprovado ou não
        if(nota >= 60) {
            printf("Aluno %d está APROVADO.\n", i + 1);
        } else {
            printf("Aluno %d está REPROVADO.\n", i + 1);
        }

        // Atualizar a soma das notas
        soma = soma + nota;

        // Atualizar a maior nota
        if(nota > maior) {
            maior = nota;
        }

        // Atualizar a menor nota
        if(nota < menor) {
            menor = nota;
        }
    }

    // Calcular a média da turma
    media = soma / n;

    // Exibir a média, maior e menor nota
    printf("\nMédia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
