/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%
*/
#include <stdio.h> 

int main () {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_de_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_de_renda - imposto_previ;

  printf("-----------------------------\n");
  printf("\033[38;5;200m   C O N T R A C H E Q U E   \n\033[0m");
  printf("-----------------------------\n");
  printf("\033[38;5;219mSalario bruto......: R$ %8.2f\n\033[38;5;0m", salario_bruto);
  printf("\033[38;5;219mImposto renda......: R$ %8.2f\n\033[38;5;0m", imposto_de_renda);
  printf("\033[38;5;219mImposto previ......: R$ %8.2f\n\033[38;5;0m",imposto_previ);
  printf("\033[38;5;219mSalario liquido....: R$ %8.2f\n\033[38;5;0m", salario_liquido);

  return 0;
}
  