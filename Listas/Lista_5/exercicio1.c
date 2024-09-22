#include <stdio.h>

int main() {
   
  int num = 10;
  
  do {
      printf("%i,", num); // Imprime o número atual
      num--; // Decrementa num para ir para o próximo número
  } while (num >= 1); // Continua enquanto num for maior ou igual a 1
  
  return 0; 
}
