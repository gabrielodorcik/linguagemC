//codigo para fazer a multiplicação entre matrizes;
#include <stdio.h>
//importando o variavel Maxima com um valor definido;
#define MAX 10

int main(void) {
  //declarando os vetores e variáveis;
  double mat1 [MAX] [MAX], mat2 [MAX] [MAX], resultado [MAX] [MAX];
  int i, j, n, k;
  k=0;

      //pedindo para o usuário digitar o tamanho do vetor e                guardando logo em seguida;
    printf("Dimensões das Matrizes (max. 10) \n");
      scanf("%d", &n);

      //lendo os valores da matriz, linha por linha;
    printf("Lendo Dados da Primeira Matriz, Linha por Linha\n");
      for(i=0; i<n; i++){ //linha;
        for(j=0; j<n; j++){ //coluna;
          scanf("%lf", &mat1[i][j]);
        }
      }
      //imprimindo os dados da matriz digitada acima;
    printf("Imprimindo Dados da Primeira Matriz, Linha por Linha\n");
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          printf("%.2lf ", mat1[i][j]);
        
        }
          printf("\n");
      }

      //lendo os valores da segunda matriz, linha por linha;
    printf("Lendo dados da segunda matriz, linha por linha\n");
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          scanf("%lf", &mat2[i][j]);
          
        }
      }
      //imprimindo os valores da segunda matriz, linha por linha;
    printf("imprimindo dados da segunda matriz, linha por linha\n");
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          printf("%.2lf ", mat2[i][j]);
        
        }   
          printf("\n");
      }
      //imprimindo a multiplicação
    printf("Imprimindo os valores da multiplicação das matrizes.\n \n");
      for(i = 0;  i < n ; i++){
        
        for(j = 0; j < n; j++){
            resultado [i] [j] = 0;
          //sempre que for preciso usar uma somatoria, devemos usar um laço;
          for(k = 0; k<n; k++){
            resultado [i][j] = resultado [i][j] +(mat1[i][k] * mat2[k][j]); 
            
            }
            printf("%.2lf ", resultado[i] [j]);
          }
        }
          printf("\n ");
      }
