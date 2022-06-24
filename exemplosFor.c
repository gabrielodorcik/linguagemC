#include <stdio.h> 

int main(void) { 
  int i, n,  numero; 
  i = 1; 

   printf("Digite um numero: "); 
      scanf("%d", &n); 

  //printf("%d", n); 
  for (numero=1; i<=n; numero++) { 
    if(numero%2==0){ 
    printf("%d; ", numero); 
      i++; 
    } 
  } 
} 