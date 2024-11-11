/*Calcular o maior entre dois valores reais*/
#include <stdio.h>

float MaiorNumero(float a, float b){
    
    if(a > b){
        return a;
    } else{
        return b;
    }
}

int main(){
    
    float n1, n2, resultado;
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    printf("\nInforme o segundo valor: ");
    scanf("%f", &n2);
    
    resultado = MaiorNumero(n1, n2);
    
    printf("O Maior número entre %2.f e %2.f é o: %2.f", n1, n2, resultado);
    
}