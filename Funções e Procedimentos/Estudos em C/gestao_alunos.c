#include <stdio.h> // Biblioteca padrão para entrada e saída

int main()
{
    int Alunos = 0;          // Variável para armazenar o número de alunos
    float total = 0, Media;  // Variável para armazenar a soma das notas e a média calculada
    int NotaSuperior = 0;    // Contador para o número de notas acima da média

    // Solicita ao usuário que informe o número de alunos a ser registrado
    // O loop continua até que um valor positivo seja inserido
    while (Alunos <= 0)
    {
        printf("\nInforme quantos alunos deseja registrar: ");
        scanf("%d", &Alunos);  // Lê o número de alunos
    }

    float Notas[Alunos];  // Declaração do array para armazenar as notas dos alunos

    // Primeiro loop: lê as notas de cada aluno e soma para calcular a média
    for (int i = 0; i < Alunos; i++)
    {
        printf("\nInforme a nota do Aluno %d: ", i + 1); // Solicita a nota do aluno (índice + 1)
        scanf("%f", &Notas[i]);  // Armazena a nota no array `Notas`
        total += Notas[i];       // Soma a nota ao total para cálculo posterior da média
    }

    // Calcula a média das notas somando todas e dividindo pelo número de alunos
    Media = total / Alunos;
    printf("\nA média da turma é: %.2f\n", Media); // Exibe a média calculada com duas casas decimais

    // Segundo loop: verifica quantas notas estão acima da média calculada
    for (int i = 0; i < Alunos; i++)
    {
        if (Notas[i] > Media) // Se a nota do aluno é maior que a média
        {
            NotaSuperior++;   // Incrementa o contador de notas acima da média
        }
    }

    // Exibe o número de alunos com nota acima da média
    printf("\nNúmero de alunos com nota acima da média: %d\n", NotaSuperior);

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
