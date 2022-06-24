//Primeiro exercicio da P2;
//Gabriel Odorcik RA 2760482211029 e Matheus Lopes RA 2760482121036, 1 ADS;

#include <stdio.h>

int main(void) {
  
  int vet[10];
  int i, vc;

  printf("Insira os valores do vetor, maximo são 10 elementos: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
    
	}
  
  printf("Digite o numero do valor chave: ");
  scanf("%d", &vc);

    for (i = 0; i < 10; i++){
      if (vc == vet[i]){
        break;
      }
    }
  
    if (i < 10) {
      printf("Indice do numero chave: %d", i);
      
    }else{
      printf("Número não encontrado!");
    }
  
  return 0;
}