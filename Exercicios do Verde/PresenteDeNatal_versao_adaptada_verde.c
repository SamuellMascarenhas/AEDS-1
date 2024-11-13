#include <stdio.h>
#include <string.h>

#define MAX_PRESENTES 100

typedef struct {
    char nome[50];
} Pessoa;

typedef struct {
    char nome[100];
    float preco;
    int preferencia;
} Presente;

void ordenarPresentes(Presente presentes[], int numPresentes) {
    for (int i = 0; i < numPresentes - 1; i++) {
        for (int j = i + 1; j < numPresentes; j++) {
            if (presentes[i].preferencia < presentes[j].preferencia ||
               (presentes[i].preferencia == presentes[j].preferencia && presentes[i].preco > presentes[j].preco) ||
               (presentes[i].preferencia == presentes[j].preferencia && presentes[i].preco == presentes[j].preco &&
                strcmp(presentes[i].nome, presentes[j].nome) > 0)) {
                
                Presente temp = presentes[i];
                presentes[i] = presentes[j];
                presentes[j] = temp;
            }
        }
    }
}

void imprimirLista(char* nomePessoa, Presente presentes[], int numPresentes) {
    printf("Lista de %s\n", nomePessoa);
    for (int i = 0; i < numPresentes; i++) {
        printf("%s - R$%.2f\n", presentes[i].nome, presentes[i].preco);
    }
    printf("\n");
}

int main() {
    Presente presentesJucilena[] = {
        {"Smartphone", 950.00, 10},
        {"Notebook", 2200.00, 9},
        {"Xadrez", 50.00, 7},
        {"Xbox", 1250.50, 7},
        {"Livro Star Wars", 35.00, 6},
        {"Quadro magnetico", 150.00, 5},
        {"Porta retratos", 15.00, 2}
    };
    int numPresentesJucilena = sizeof(presentesJucilena) / sizeof(presentesJucilena[0]);

    Presente presentesAnelise[] = {
        {"Televisao", 700.00, 7},
        {"Colecao Harry Potter", 180.00, 8},
        {"Bolsas", 150.00, 8},
        {"Camera fotografica", 1200.75, 10},
        {"Playstation 3", 1200.75, 10},
        {"Viagem Disney", 5000.56, 10},
        {"Cachorrinho", 300.30, 5},
        {"Assinatura 1 ano Netflix", 240.00, 9},
        {"Cd The Script", 35.00, 8},
        {"Blusas", 50.00, 2}
    };
    int numPresentesAnelise = sizeof(presentesAnelise) / sizeof(presentesAnelise[0]);

    ordenarPresentes(presentesJucilena, numPresentesJucilena);
    ordenarPresentes(presentesAnelise, numPresentesAnelise);

    imprimirLista("Jucilena", presentesJucilena, numPresentesJucilena);
    imprimirLista("Anelise", presentesAnelise, numPresentesAnelise);

    return 0;
}
