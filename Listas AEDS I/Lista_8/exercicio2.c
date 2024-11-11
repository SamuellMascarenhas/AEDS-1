/*Calcular e escrever os dez primeiros termos da sequência abaixo:
10/100, 99/11, 12/98, 97/13, 14/96,*/
#include <stdio.h>

int main() {
    int numerador1 = 10; // Começa com 10
    int numerador2 = 99; // Começa com 99
    int denominador1 = 100; // Começa com 100
    int denominador2 = 11; // Começa com 11

    printf("Os dez primeiros termos da sequência são:\n");
    
    for (int i = 0; i < 5; i++) { // 5 iterações para obter 10 termos
        // Primeiro termo: numerador1 / denominador1
        printf("%d/%d\n", numerador1, denominador1);
        // Segundo termo: numerador2 / denominador2
        printf("%d/%d\n", numerador2, denominador2);

        // Atualiza os numeradores e denominadores
        numerador1 += 2; // Aumenta o primeiro numerador em 2
        numerador2 -= 2; // Diminui o segundo numerador em 2
        denominador1 -= 2; // Diminui o primeiro denominador em 2
        denominador2 += 2; // Aumenta o segundo denominador em 2
    }

    return 0;
}
