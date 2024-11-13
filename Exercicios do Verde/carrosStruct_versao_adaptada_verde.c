#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    int ano;
    float preco;
} Carros;

Carros cadastrarCarros(char marca[], int ano, float preco) {
    Carros carros;
    strcpy(carros.marca, marca);
    carros.ano = ano;
    carros.preco = preco;
    return carros;
}

void imprimirCarro(Carros car) {
    printf("Marca: %s, Ano: %d, Preco: %.2f\n", car.marca, car.ano, car.preco);
}

void carrosPrecoMenor(Carros car[], int Qtd, float valorFiltrado) {
    printf("Carros com preco menor que %.2f:\n", valorFiltrado);
    for (int i = 0; i < Qtd; i++) {
        if (car[i].preco < valorFiltrado) {
            imprimirCarro(car[i]);
        }
    }
}

int main() {
    int Qtd = 3;
    float valorMaximo = 30000.0;

    Carros carro[Qtd];
    
   
    carro[0] = cadastrarCarros("Toyota", 2020, 25000.0);
    carro[1] = cadastrarCarros("Ford", 2018, 32000.0);
    carro[2] = cadastrarCarros("Honda", 2021, 28000.0);

    
    carrosPrecoMenor(carro, Qtd, valorMaximo);

    return 0;
}
