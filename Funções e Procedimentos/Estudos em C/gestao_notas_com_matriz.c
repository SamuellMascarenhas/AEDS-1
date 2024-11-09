#include <stdio.h>
#include <stdlib.h>

int main() {

    // Constantes que definem o número de bimestres e o número de alunos
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    // Matrizes para armazenar as notas dos alunos e suas médias
    float notasAlunos[bimestresAnuais][numeroDeAlunos]; // Cada linha é um bimestre e cada coluna representa um aluno
    float mediasAlunos[numeroDeAlunos]; // Armazena a média de cada aluno
    float media = 0; // Variável temporária para calcular a média de cada aluno

    // Inicializa a matriz de notas com zero (não necessário aqui, pois já será preenchida, mas feito por segurança)
    for (int i = 0; i < bimestresAnuais; i++) {
        for (int j = 0; j < numeroDeAlunos; j++) {
            notasAlunos[i][j] = 0;
        }
    }

    // Inicializa o vetor de médias dos alunos com zero
    for (int i = 0; i < numeroDeAlunos; i++) {
        mediasAlunos[i] = 0;
    }

    // Entrada de notas e cálculo das médias
    for (int aluno = 0; aluno < numeroDeAlunos; aluno++) {
        printf("Insira as notas do aluno %i:\n", aluno + 1);
        for (int nota = 0; nota < bimestresAnuais; nota++) {
            printf("Nota %i: ", nota + 1);
            scanf(" %f", &notasAlunos[nota][aluno]); // Lê a nota do aluno no bimestre correspondente
            media += notasAlunos[nota][aluno]; // Soma a nota ao total de notas para o aluno
        }
        mediasAlunos[aluno] = media / bimestresAnuais; // Calcula a média do aluno dividindo o total pelo número de bimestres
        media = 0; // Reseta a variável `media` para o próximo aluno
    }

    // Exibe as médias de cada aluno
    printf("\nMédias dos alunos:\n");
    for (int aluno = 0; aluno < numeroDeAlunos; aluno++) {
        printf("A média do aluno %i é %.2f\n", aluno + 1, mediasAlunos[aluno]);
    }

    return 0; // Indica que o programa terminou com sucesso
}
