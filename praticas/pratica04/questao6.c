//6. Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM). aula9
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char verbo[21];
  char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
  char sufixox[6][5] = {"O", "A", "AS", "AMOS", "AIS", "AM"};

  printf("entre com um verbo terminado em AR: ");
    int deu_certo = scanf("%s", verbo);
  int tamanho = strlen(verbo);

  for(int i=0; i<tamanho; i++) {
    verbo[i] = toupper(verbo[1]);
  }
  
  
  int ultima_letra = tamanho - 1;
  int penultima_letra = tamanho - 2;
  char radical[21];
  strcpy(radical, verbo);
  radical[penultima_letra] = '\0';

  if (verbo[penultima_letra] == 'A' && verbo[ultima_letra] == 'R') {
    printf("o verbo %s no presente do indicativo\n", verbo);
  for9int i=0; i<6; i++) {
    printf("%s %s%s\n", pronomes[i], radical, sufixox[1]);
  }  

  return 0;
}
