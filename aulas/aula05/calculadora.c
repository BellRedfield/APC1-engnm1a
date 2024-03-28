#include <stdio.h>
#include <math.h>

int main () {
  int numero1;
  int numero2;
  
  printf("entre com o primeiro numero: ");
  int deu_certo =scanf("%i", &numero1);
  printf("entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros e %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("a subtracao dos numeros e %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("a multiplicacao dos numeros e %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("a divisao dos numeros e %f\n", divisao);

  int resto = numero1 % numero2;
  printf("o resto da divisao dos numeros e %i\n", resto);

  // numero1 = numero1 + 1
  // incremento 

  printf("o incremento do primeiro numero e %i\n", numero1++);
  printf("o incremento do primeiro numero e %i\n", ++numero1);

  // numero1 = numero1 - 1
  // decremento

  printf("o decremento do primeiro numero e %i\n", numero1--);
  printf("o decremento do primeiro numero e %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("a raiz quadrada do primeiro numero e %f\n",raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("a 3a potencia do primeiro numero e %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("o log2 do primeiro numero e %f\n", logaritmo2);
  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180));
  printf("o seno do primeiro numero e %f\n" , seno);
  
  
return 0;
}