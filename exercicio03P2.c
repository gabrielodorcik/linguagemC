//Terceiro exercico da P2;
//Gabriel Odorcik RA 2760482211029 e Matheus Lopes RA 2760482121036, 1 ADS;

#include <stdio.h>
int main(void) {
  
	int n, i, j;

  printf("Digite as dimensões do vetor: ");
	scanf("%i", &n);
  int vet[n][n];
	
  	for (i = 0; i < n; i++) {
      
  		for (j = 0; j < n; j++) {
        printf("Digite um elemento: ");
  			scanf("%i", &vet[i][j]);
      }
  	}
	
  	for (i = 0; i < n; i++) {
      
  		for (j = 0; j < n; j++) {
  			//printf("%i ", vet[i][j]);
  		}
	  }
    int soma_Diag_Prin = 0, soma_Diag_Sec = 0;

  
	  for (i = 0; i < n; i++) {
		  soma_Diag_Prin += vet[i][i];
    
	  }
	
	  for (i = 0; i < n; i++) {
		  soma_Diag_Sec += vet[i][n-i-1];
    
	  }
  
	//secção dos print
	  int vet_Linha[n];
  
	  for (i = 0; i < n; i++) {
		  vet_Linha[i] = 0;
    
		  for (j = 0; j < n; j++) {
			  vet_Linha[i] += vet[i][j];
        
		  }
	  }
    //printf("\nSoma das linhas: ");
	  //for (i = 0; i < n; i++) {
		 // printf("%i ", vet_Linha[i]);
      
	  //}

	  int vet_Col[n];
  
	  for (j = 0; j < n; j++) {
		  vet_Col[j] = 0;
    
		  for (i = 0; i < n; i++) {
			  vet_Col[j] += vet[i][j];
      
		  }
	  }
  
   // printf("\nSoma das colunas: ");
	  //for (i = 0; i < n; i++) {
		 // printf("%i ", vet_Col[i]);
    
	 // }
	
	  int testaLinha = 1, testaCol = 1;
  
	  for (i = 1; i <  n; i++) {
		  if (vet_Linha[i] != vet_Linha[i-1]) {
			  testaLinha = 0;
			  break;
      
		}else if (vet_Col[i] != vet_Col[i-1]) {
			testaCol = 0;
			break;
      
		  }
	  }
  
    //printf("\nSoma diagonal principal %i e secundária %i\n", soma_Diag_Prin, soma_Diag_Sec);
  
	  if (testaLinha && testaCol && soma_Diag_Prin == soma_Diag_Sec && soma_Diag_Prin == vet_Linha[0]){
		  printf("\nQuadrado mágico");
    
	  } else {
		  printf("\nQuadrado apenas");
    
	  }

	return 0;
}