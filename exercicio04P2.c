//Quarto Exercicio P2;
//Gabriel Odorcik RA 2760482211029 e Matheus Lopes RA 2760482121036, 1 ADS;

#include <stdio.h>
#include <math.h>
#define MAX 80

int main(){
    char vtFrase[MAX], mtFrase[MAX][MAX];
    int tam, maxPalavra; 
    int i, j, count;

    printf("Digite o a dimensão do vetor, 'por exemplo 6x6 = 36' : ");
    scanf("%d", &tam);

    printf("Digite a Frase Criptografada: ");
    scanf("%s", vtFrase);

    maxPalavra = sqrt(tam);

    for(i = 0, count = 0; i < maxPalavra; i++) {
        for(j = 0; j < maxPalavra; j++, count++) {
            mtFrase[i][j] = vtFrase[count];
          
            printf("%c", mtFrase[i][j]);
        }
      printf("\n");
    }

    for(j = 0, i = 0, count = 0; i < maxPalavra; ){
        if(mtFrase[i][j] == '*'){
            vtFrase[count] = ' ';
            i = 0;
            count++;
            j++;
        } else {
            vtFrase[count] = mtFrase[i][j];
            count++;
            i++;
        }
    }
    printf("Mensagem descriptografada: ");
    vtFrase[count] = '\0';
    printf("%s", vtFrase);

    return 0;
}