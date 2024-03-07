#include <stdio.h>

int main() {
char caracter; //'A' '1' '\n' '\\' 1byte -128 a 127
  int inteiro; // -15, 0 +15 4bytes -2bl a 2bl
  float decimal_com_6casas; // 0.00001 4bytes  -3.4e38 e 3.4e38
  double decimal_com_15casas; // 0.0000000000000001 8bytes -1.8e388 a 1.8e388
  void sem_valor;
  // nao existe string, mas C aceita "uma frase qualquer"
  return 0;
}