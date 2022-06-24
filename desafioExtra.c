#include <stdio.h>
//Gabriel Odorcik RA: 2760482211029
//desenvolver um código para verificar uma sequência entre dois vetores
//declarar as variaveis
//pedir para o usuário digitar o tamanho dos vetores e em seguida os valores do vetor
//fazer a verificação se existe o primeiro vetor dentro do segundo vetor
//printar quantas vezes ocorreu esta sequência

int main() {
    //variaveis e o vetor  
    int vetM[15], vetN[15]; 
    int m = 0, n = 0, i = 0, j = 0, iguais, cont;

    //armazenamento do tamanho do primeiro vetor
    printf("Quantidade de valores para o primeiro vetor: ");
    scanf("%d", &n);

    //valores do vetor
    printf("\nDigite os valores abaixo:\n");
      for(i=0; i<n; i++) {  
          scanf("%d",&vetN[i]); 
      }

    //armazenamento do segundo vetor
    printf("\nQuantidade de valores para o segundo vetor. Obs:Tem que ser maior do que o vetor anterior: ");
    scanf("%d", &m);

    //valores do vetor
    printf("\nDigite os valores abaixo:\n");
      for(i=0; i<m; i++) {  
          scanf("%d",&vetM[i]); 
      }

    //area de verificação
    cont = 0;
    for(i=0; i < m - n + 1; i++) {
        iguais = 1;
        for(j=0; j < n; j++) { 
            if(vetM[i+j] != vetN[j]) {
                iguais = 0;
            }
        }
      
        if(iguais) {
            cont++;
        }
    }
  
    //printar a quantidade de vezes que a sequência ocorreu
    printf("\nNo total, são %d repetição(ões)", cont);
    
    return 0;
}