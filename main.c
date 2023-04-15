#include <ctype.h>
#include <stdio.h>
#include <string.h>

//eu tinha pensando em muitas manieira de resolver isso, sem função, com muitos ifs mas esse foi a melhor

// definindo algumas constantes para auxiliar ao código, podemos dizer que assim
// também estamos diminuindo um uso de memória
#define MAX_N 50
#define MAX_reservada 50
#define MAX_tamanho 50
#define NUM_simbolos 5
const char simbolosAceitos[NUM_simbolos] = {'!', '@', '#', '$', '?'};

void ReceberReservada(char reservada[][MAX_tamanho + 1], int n) {
  for (int i = 0; i < n; i++) {
    scanf("%s", reservada[i]);
  }
}

// Aqui a gente criou uma função para tirar o \n desnecessário por \0
void removerDesnecessario(char txt[]) {
  int tamanho = strlen(txt);
  if (txt[tamanho - 1] == '\n') {
    txt[tamanho - 1] = '\0';
  }
}

// Aqui a gente criou uma função para encontrar o palindromo na senha
int ehPalindromo(char txt[]) {
  int tamanho = strlen(txt);
  for (int i = 0; i < tamanho / 2; i++) {
    if (txt[i] != txt[tamanho - i - 1]) {
      return 0;
    }
  }
  return 1;
}

// Aqui a gente criou a função para verificar se a senha possui uma palavra
// verificada
int ehReservada(char palavra[], char reservada[][MAX_tamanho + 1], int n) {
  for (int i = 0; i < n; i++) {
    if (strstr(palavra, reservada[i]) != NULL)  {

      if((isupper(reservada)) || (islower(reservada))){
        return 1; // contém palavra reservada
      }
      
    }
  }
  return 0; // não contém palavra reservada
}

// Função para verificar se a senha é valida ou não
int ehUmaSenhaValida(char senhaUsuario[], char reservada[][MAX_tamanho + 1],
                     int n) {
  int temMaiusc = 0, temMinusc = 0, temNumero = 0, temSimbolo = 0;
  int erroEncontrado = 0;
  int tamanhoSenha = strlen(senhaUsuario);

  if (tamanhoSenha < 8) {
    // printf("DEBUG: len = %d\n", len); => usei para testar
    printf("A senha deve conter pelo menos 8 caracteres\n");
    erroEncontrado = 1;
  }

  //aqui eu usei algumas funções da biblioteca ctype
  for (int i = 0; i < tamanhoSenha; i++) {
    if (isupper(senhaUsuario[i])) {
      temMaiusc = 1;
    } else if (islower(senhaUsuario[i])) {
      temMinusc = 1;
    } else if (isdigit(senhaUsuario[i])) {
      temNumero = 1;
    } else if (strchr(simbolosAceitos, senhaUsuario[i]) != NULL) {
      temSimbolo = 1;
    }
  }

  if (!temMaiusc) {
    printf("A senha deve conter pelo menos uma letra maiuscula\n");
    erroEncontrado = 1;
  }

  if (!temMinusc) {
    printf("A senha deve conter pelo menos uma letra minuscula\n");
    erroEncontrado = 1;
  }

  if (!temNumero) {
    printf("A senha deve conter pelo menos um numero\n");
    erroEncontrado = 1;
  }

  if (!temSimbolo) {
    printf("A senha deve conter pelo menos um simbolo\n");
    erroEncontrado = 1;
  }

  if (ehPalindromo(senhaUsuario)) {
    printf("A senha e um palindromo\n");
    erroEncontrado = 1;
  }

  if (ehReservada(senhaUsuario, reservada, n)) {
    printf("A senha nao pode conter palavras reservadas\n");
    erroEncontrado = 1;
  }

  if (erroEncontrado) {
    printf("");
    return 0;
  }

  printf("ok\n");
  return 1;
}

int main() {
  int n;
  char reservada[MAX_reservada][MAX_tamanho];
  char senhaUsuario[MAX_tamanho];

  scanf("%d", &n);

  ReceberReservada(reservada, n);

  getchar();

  fgets(senhaUsuario, MAX_tamanho, stdin);

  removerDesnecessario(senhaUsuario);

  ehUmaSenhaValida(senhaUsuario, reservada, n);

  return 0;
}