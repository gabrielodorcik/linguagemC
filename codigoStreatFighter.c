// código para o desafio de Streat Fighter
#include <stdio.h>

int main(void) {
  printf("Gabriel Odorcik RA = 2760482211029\n");
  printf("MAtheus Lopes Silva RA = 2760482121036\n");
  printf("\nDesafio do Street Fighter \n");
  // declarar as variáveis
  // pedir para que o usuário imprima os valores dos danos
  // fazer a verificação se o valor aplicado é perfeito ou triangulo
  // imprimir os valores dos danos de cada personagem, round a round
  // dizer quem vencer

  int golpe, golpeKen = 0, golpeRyu = 0, divisores = 0, triangulo = 0;
  int oportRyu = 1, oportKen = 0, round = 0, negativo = 0, i;

  // inserindo o primeiro  dano
  printf("\nInsira o valor do golpe (positivo = Ryu; Negativo = Ken; 0 = "
         "Finish): ");
  scanf("%d", &golpe);

  // enquanto valor diferente de 0 é true
  while (golpe != 0) {
    // sempre inicializando em 0 as variaveis
    triangulo = 0;
    divisores = 0;
    negativo = 0;

    // se o golpe for negativo seguiremos com essa condição
    if (golpe < 0) {
      negativo = 1;
      golpe = golpe * -1;
    }

    // começa o laço para saber se é perfeito
    for (int i = 1; i < golpe; i++) {

      // teste para saber os divisores
      if (golpe % i == 0) {
        divisores = divisores + i;
      }

      // caso a soma dos divisores for igual a si mesmo o numero é multiplicado
      // por 3
      if (divisores == golpe) {
        golpe = golpe * 3;
      }
    }
    // laço para saber se é triangulo
    for (int i = 1; i < golpe; i++) {
      // se o golpe for triangulo ele será multiplicado por 2
      triangulo = triangulo + i;
      if (triangulo == golpe) {
        golpe = golpe * 2;
      }
    }

    // se for false
    if (negativo == 0) {
      golpeRyu = golpeRyu + golpe;
    }
    // true
    else {
      // passa a vez para o ken
      oportRyu = 0;
      oportKen = 1;
      golpeKen = golpeKen + golpe;
    }

    // inserindo novos golpes
    printf("Insira o valor do golpe (positivo = Ryu; Negativo = Ken; 0 = "
           "Finish): ");
    scanf("%d", &golpe);

    // se for a vez de ken e golpe for positivo ou maior que 0
    if (oportRyu == 0 && oportKen == 1 && (golpe > 0 || golpe == 0)) {

      // passando a vez ao Ryu
      oportRyu = 1;
      oportKen = 0;

      // fazendo a verificação dos vencedores de cada round
      if (golpeRyu > golpeKen) {
        round = round + 1;

      } else if (golpeRyu < golpeKen) {
        round = round - 1;
      }
      // começamdo um novo round com as acumuladoras zeradas
      golpeRyu = 0;
      golpeKen = 0;
    }
  }

  // verificação para determinar o vencedor do jogo
  if (round > 0) {
    printf("Ryu ganhou");
  } else if (round < 0) {
    printf("Ken ganhou");

  } else {
    printf("Empate");
  }
}