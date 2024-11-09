#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva para inverter os elementos de um vetor
// Recebe o vetor 'v', o índice inicial 'inicio' e o índice final 'fim'
void trocar(int v[], int inicio, int fim) {
    
    int aux;  // Variável auxiliar para realizar a troca de elementos

    // Caso base: a função para quando 'inicio' é maior ou igual a 'fim'
    if(inicio < fim) {
        aux = v[inicio];      // Salva o valor do índice 'inicio' em 'aux'
        v[inicio] = v[fim];   // Coloca o valor de 'v[fim]' em 'v[inicio]'
        v[fim] = aux;         // Coloca o valor salvo em 'aux' em 'v[fim]'
        
        // Chama a função recursivamente para continuar a troca dos próximos pares de elementos
        trocar(v, inicio + 1, fim - 1);
    }
}

// Função recursiva para imprimir os elementos de um vetor
// Recebe o vetor 'v' e o tamanho do vetor 'tam'
void imprimir(int v[], int tam) {

    // Caso base: quando 'tam' é 1, imprime o único elemento restante
    if(tam == 1) {
        printf(" %d, ", v[tam - 1]);
    }
    else {
        // Chama a função recursivamente para imprimir os elementos anteriores
        imprimir(v, tam - 1);
        
        // Imprime o elemento atual após a chamada recursiva
        printf(" %d, ", v[tam - 1]);
    }
}

int main() {

    // Declara e inicializa o vetor de inteiros
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    // Imprime o vetor original
    imprimir(vet, 10);
    
    // Chama a função 'trocar' para inverter os elementos do vetor
    trocar(vet, 0, 9);
    
    printf("\n");
    
    // Imprime o vetor após a inversão
    imprimir(vet, 10);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
