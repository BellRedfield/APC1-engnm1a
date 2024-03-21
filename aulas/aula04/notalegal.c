#include <stdio.h>

int main() {
  char nome [31];
  int quantidade;
  float valor;
  
  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf ("--------------\n");
  printf ("\x1b[38;5;226 m   NOTA LEGAL   \n\x1b[0m");
  printf ("--------------\n");
  printf ("ITEM              qtd          valor   \n");
  printf ("%-12.10s %9i %10.2f\n", nome, quantidade, valor);
 

return 0;
}