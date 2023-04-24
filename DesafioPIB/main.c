#include <stdio.h>
// Código para o desafio do Pib da dicisplina de Algoritmos.
// Neste programa, o usuário entra com um n=valor do tatal de anos que vão ser
// analisados, e em seguida a média anual do pib. O programa deve retornar os
// trienios com o intervalo de crescimento maior entre eles.

int main() {
  int n;
  printf("Desafio de PIB\nLembre-se: Indice 0 é a primeira entrada.\n");
  printf("Digite a quantidades de anos:\t");
  scanf("%d", &n);
  // for para percorrer e adicionar cada valor do ano, ao vetor, com a
  // quantidade de anos na entrada
  float pib[n]; // declarando o vetor
  for (int i = 0; i < n; i++) {
    scanf("%f", &pib[i]);
  }

  float maiorMedia = -1.0;       // declarando a média
  int trienioComeco, trienioFim; // declarando os trianios
  for (int i = 0; i < n - 2; i++) {
    float media =
        (pib[i + 2] - pib[i]) / pib[i] * 100 / 3.0; // calculo para o pip

    if (media > maiorMedia) { // fazendo a verificação
      maiorMedia = media;
      trienioComeco = i;
      trienioFim = i + 2;
    }
  }

  printf("a maior media de crescimento foi entre os anos %d e %d: %.1f\n",
         trienioComeco, trienioFim, maiorMedia); // saida

  return 0;
}
