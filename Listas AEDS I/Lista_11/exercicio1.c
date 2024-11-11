/*1. Soma de Dois Números
Escreva uma função que receba dois números inteiros e retorne a soma deles. A função deve ser testada a partir da função principal, onde os valores são lidos do teclado.*/
#include <stdio.h>

// Função que soma dois números inteiros
int soma(int a, int b){
    return a + b;
}

// Função para ler dois valores e armazená-los nos ponteiros
void lerValor(int *a, int *b){
    printf("Informe o primeiro valor: ");
    scanf("%i", a);  // Acessa o valor de a diretamente com o ponteiro
    printf("Informe o segundo valor: ");
    scanf("%i", b);  // Acessa o valor de b diretamente com o ponteiro
}

int main (){
    int n1, n2, resultado;
    
    // Chama a função lerValor, passando os endereços de n1 e n2
    lerValor(&n1, &n2);
    
    // Calcula a soma
    resultado = soma(n1, n2);
    
    // Exibe o resultado da soma
    printf("\nA soma é: %i\n", resultado);
    
    return 0;
}