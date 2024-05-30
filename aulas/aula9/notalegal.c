#include <stdio.h.

int main () {
  enum unidade_e { // agrupamento de constantes
  unidade,
  caixa,
  peso,
  lata
  };
  
  struct produto_t { //agrupa variaveis
  char nome[31];
  int quantidade;
  int unidade; // 0 - unid, 1 - caixa, 2 - peso, 3 - lata
  float preco;
  float valor;
};

  
  
struct produto_t produto[5];

  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%s", produto[i].nome);

  printf("entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &produto[i].quantidade);

  printf("entre com a unidade do produto: ");
  printf("0-unid, 1-caixa, 2-peso, 3-lata: ");
  deu_certo = scanf("%i", &produto[i].unidade);

  printf("entre com o preco do produto");
  deu_certo = scanf("%f", &produto[i].preco;
  
  produto[i].valor =  produto[i].preco * produto[i].quantidade;
  total = total + produto[i].valor;

  printf("-------------------------------\n");
  printf("\n               NOTA LEGAL\n");
  printf("-------------------------------\n");
  printf("Item     qtd und   preco  valor\n");
  printf("%-9s %03i ", produto[i].nome, produto[i].quantidade);
  switch(prodruto[i].unidade) {
    case unidade:
      printf("%3s","UN");
      break;
    case caixa: 
      printf("%3s","CX");
      break;
    case peso:
      printf("%3s","KG");
      break;
    case lata:
      printf("%3s", n "LT");
      break;
  }
   printf("%10.2f%10.2f\n" produto.preco, produto[i].valor);

    
  return 0;
}