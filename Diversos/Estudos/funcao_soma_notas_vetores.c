#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5] = {0}; // Declara um array de 5 floats para armazenar as notas e inicializa todos os valores como 0
    float media, total;    // Variáveis para calcular o total das notas e a média
    char op;               // Variável para armazenar a opção do usuário ('S' para continuar, 'N' para parar)

    // Pergunta ao usuário se deseja iniciar o registro de notas
    printf("Iniciar registro de notas? [S/N]: ");
    scanf(" %c", &op);

    // Loop que continua enquanto o usuário não digitar 'N' ou 'n' para encerrar
    while (op != 'N' && op != 'n') {
        total = 0; // Reinicializa o total a cada nova execução para evitar acúmulo de valores anteriores

        // Solicita ao usuário as 5 notas
        printf("\nInforme 5 notas:\n");
        for (int i = 0; i < 5; i++) {
            printf("Nota %d: ", i + 1);
            scanf(" %f", &notas[i]);
        }

        // Calcula o total das notas
        for (int i = 0; i < 5; i++) {
            total += notas[i];
        }

        // Calcula e exibe a média das notas
        media = total / 5;
        printf("\nA média é: %.2f\n", media);

        // Pergunta ao usuário se deseja registrar novas notas
        printf("\nDeseja registrar novas notas? [S/N]: ");
        scanf(" %c", &op);
    }

    // Mensagem de encerramento quando o usuário decide não continuar
    printf("Encerrando o programa. Obrigado!\n");

    return 0; // Indica que o programa terminou com sucesso
}
