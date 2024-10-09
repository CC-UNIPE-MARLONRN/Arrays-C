#include <stdio.h>

int le_int(char msg[]);
void exibe_aprovacao(float media);

int main(void) {
  int notas[3];
  int soma = 0;
  int n = 3;

  for (int i = 0; i < n; i++) {
    notas[i] = le_int("Digite a nota:");
    soma += notas[i];
  }

  float media = soma / (float)n;
  printf("Sua média foi: %.1f\n", media);

  exibe_aprovacao(media);
  return 0;
}

int le_int(char msg[]) {
  int num;
  printf("%s\n", msg);
  scanf("%d", &num);
  return num;
}

void exibe_aprovacao(float media) {
  if (media >= 70) {
    printf("Aprovado!");
  } else {
    if (media >= 40) {
      printf("Recuperação!");
    } else {
      printf("Reprovado!");
    }
  }
}