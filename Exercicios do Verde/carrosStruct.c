#include <stdio.h>  // Biblioteca padrão para entrada e saída, usada para funções como printf e scanf
#include <stdlib.h> // Biblioteca padrão C, fornece funcionalidades adicionais, como alocação de memória
#include <string.h> // Biblioteca para manipulação de strings, usada para capturar o nome

// Definição da estrutura Carros, que armazena as informações de cada carro
typedef struct
{
    char marca[50];  // Nome da marca do carro, com limite de até 50 caracteres
    int ano;         // Ano de fabricação do carro
    float preco;     // Preço do carro
} Carros;

// Função para cadastrar um novo carro e retornar os dados inseridos
Carros cadastrarCarros()
{
    Carros carros; // Declara uma variável do tipo Carros para armazenar os dados

    // Captura a marca do carro
    printf("\nInforme a marca do carro: ");
    getchar(); // Limpa o buffer de entrada para evitar problemas com fgets
    fgets(carros.marca, 50, stdin); // Lê a marca do carro, incluindo espaços

    // Captura o ano de fabricação do carro
    printf("\nInforme o ano: ");
    scanf(" %i", &carros.ano);

    // Captura o preço do carro
    printf("\nInforme o preço: ");
    scanf(" %f", &carros.preco);

    return carros; // Retorna a estrutura preenchida com os dados do carro
}

// Função para imprimir os dados de um carro
void imprimirCarro(Carros car)
{
    printf("\nMarca: %s", car.marca);      // Exibe a marca do carro
    printf("\nAno: %i", car.ano);          // Exibe o ano de fabricação do carro
    printf("\nPreço: %.2f", car.preco);    // Exibe o preço do carro com duas casas decimais
}

// Função para exibir os carros com preço menor ou igual ao valor filtrado
void carrosPrecoMenor(Carros car[], int Qtd, float valorFiltrado)
{
    printf("\nCarros com preço menor ou igual a %.2f:\n", valorFiltrado);

    // Percorre o array de carros
    for (int i = 0; i < Qtd; i++)
    {
        // Verifica se o preço do carro atual é menor ou igual ao valor filtrado
        if (car[i].preco <= valorFiltrado)
        {
            imprimirCarro(car[i]); // Exibe os dados do carro
        }
    }
}

int main()
{
    int Qtd;           // Variável para armazenar o número de carros a registrar
    float valorMaximo; // Variável para armazenar o valor máximo para o filtro de preço

    // Solicita o valor máximo que será usado para filtrar os carros
    printf("\nInforme o valor que deseja filtrar: ");
    scanf(" %f", &valorMaximo);

    // Solicita a quantidade de carros que o usuário deseja registrar
    printf("\nInforme o número de carros que deseja registrar: ");
    scanf(" %i", &Qtd);

    Carros carro[Qtd]; // Declara um array de Carros com tamanho baseado no valor de Qtd

    // Loop para registrar cada carro
    for (int i = 0; i < Qtd; i++)
    {
        // Chama a função para cadastrar um carro e armazena o resultado no array
        carro[i] = cadastrarCarros();
        
        // Exibe as informações do carro cadastrado
        imprimirCarro(carro[i]);
    }

    // Chama a função para exibir os carros com preço menor ou igual ao valor máximo informado
    carrosPrecoMenor(carro, Qtd, valorMaximo);

    return 0; // Indica que o programa foi finalizado com sucesso
}
