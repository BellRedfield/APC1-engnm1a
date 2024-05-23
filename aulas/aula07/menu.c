#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MENU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpar buffer do teclado

    if (!deu_certo) {
      opcao = 0;
    }

    switch (opcao) {
    default:
      printf("Opcao invalida! Pressione ENTER p/ prosseguir...\n");
      getchar();
    case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf ("Qual seu nome? ");
      deu_certo = scanf("%[^\n]s" , nome);
      while (getchar() != '\n'); // limpar buffer do teclado
      printf("Hello Hello %s!\n", nome);
      printf("Pressione ENTER p/ iniciar...\n");
      getchar();
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("ranking - Top 5\n");
      printf("1o lugar: Coronel Carrillo - 1000 pontos\n");
      printf("2o lugar: Pedro Pascal - 800 pontos\n");
      printf("3o lugar: Mr.Chang - 700 pontos\n");
      printf("4o lugar: Coronel Martinez - 500 pontos\n");
      printf("5o lugar: Castaños Brothers - 200 pontos\n");
      printf("Pressione ENTER p/ voltar...\n");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      printf("bye bye!\n");
      break;
    }
  }
  return 0;
}