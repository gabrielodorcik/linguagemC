//Segundo exercicio da P2;
//Gabriel Odorcik RA 2760482211029 e Matheus Lopes RA 2760482121036, 1 ADS;

#include <stdio.h>
int main (){
	
	int vet1[50];
  int vet2[50];
  int vetResult[50*2];
  int n, m, i, j, k, tam;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Valor da posição: ", i);
		scanf("%d", &vet1[i]);
    
	}
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &m);
	
	for(i = 0; i < m; i++){
		printf("Valor da posição: ", i);
		scanf("%d", &vet2[i]);
    
	}
	
	tam = m + n;
	
	for(i = 0; i < n; i++)
		vetResult[i] = vet1[i];
	
	for(i = 0; i < m; i++)
		vetResult[i + n] = vet2[i];
	
	for(i = 0; i < tam; i++){
		
        for(j = i + 1; j < tam;){
            if(vetResult[j] == vetResult[i]){
              
                for(k = j; k < tam; k++)
                    vetResult[k] = vetResult[k + 1];
                tam--;
          
            }else{
                j++;
            }
        }
    }
	
	printf("Vet1 = ");
	for(i = 0; i < n; i++){
		if(i == n - 1)
			printf("%d", vet1[i]);
		else	
			printf("%d, ", vet1[i]);
		}
	
	
	printf("\nVet2 = ");
	for(i = 0; i < m; i++){
		if(i == m - 1)
			printf("%d", vet2[i]);
		else	
			printf("%d, ", vet2[i]);
		}
	
	
	printf("\nResultado = ");
	for(i = 0; i < tam; i++){
		if(i == tam - 1)
			printf("%d", vetResult[i]);
		else	
			printf("%d, ", vetResult[i]);
		}
	
	return 0;
}
