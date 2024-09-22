/*Ler três valores inteiros. Escrevê-los em ordem decrescente*/

#include <stdio.h>

int main() {
   
   int n1, n2, n3; // Declaração das variáveis inteiras
   
   // Leitura dos três valores
   printf("Informe o primeiro valor: ");
   scanf(" %i", &n1); // Leitura do primeiro valor
   printf("Informe o segundo valor: ");
   scanf(" %i", &n2); // Leitura do segundo valor
   printf("Informe o terceiro valor: ");
   scanf(" %i", &n3); // Leitura do terceiro valor
   
   // Verifica se n1 é o maior
   if(n1 >= n2 && n1 >= n3){
       printf("%i ", n1);  // Imprime n1 
       
       // Verifica qual dos outros dois é maior
       if(n2 >= n3){
           printf("%i ", n2);  // Imprime n2 
           printf("%i", n3);    // Imprime n3
       } else {
           printf("%i ", n3);  // Imprime n3 
           printf("%i", n2);    // Imprime n2
       }
   } 
   // Verifica se n2 é o maior
   else if (n2 >= n1 && n2 >= n3){
       printf("%i ", n2);  // Imprime n2 
       
       // Verifica qual dos outros dois é maior
       if(n1 >= n3){
           printf("%i ", n1);  // Imprime n1 
           printf("%i", n3);    // Imprime n3
       } else {
           printf("%i ", n3);  // Imprime n3 
           printf("%i", n1);    // Imprime n1
       }
   }
   // Se n3 é o maior
   else {
       printf("%i ", n3);  // Imprime n3 
       // Verifica qual dos outros dois é maior
       if(n1 >= n2){
           printf("%i ", n1);  // Imprime n1 
           printf("%i", n2);    // Imprime n2
       } else {
           printf("%i ", n2);  // Imprime n2 
           printf("%i", n1);    // Imprime n1
       }
   }

   return 0; 
}
