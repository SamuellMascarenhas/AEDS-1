#include <stdio.h>
// maneira iterativa
void escreverSequencia(){
  
  for (int n = 1; n <= 5; n++ ){
      printf("%i - ", n);
  }
  for (int n = 5; n >=1 ; n-- ){ // Loop para a parte decrescente
      printf("%i - ", n);
  }
    
}
int main (){
    
    escreverSequencia(1);
    printf("\n");

    return 0;
}