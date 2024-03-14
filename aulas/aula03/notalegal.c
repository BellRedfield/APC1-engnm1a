#include <stdio.h>

int main() {
  printf ("--------------\n");
  printf ("\x1b[38;5;226 m   NOTA LEGAL   \n\x1b[0m");
  printf ("--------------\n");
  printf ("ITEM              qtd          valor   \n");
  printf ("%-12.10s %9i %10.2f\n", "Banana nanica",1, 15.00);
  printf ("%-12.10s %9i %10.2f\n", "Maca fuji", 10, 50.00);
  printf ("%-12.10s %9i %10.2f\n", "Uva globo", 5, 26.00);
  // printf("Banana nanica     1   15,00\n");
  // printf("Maca fuji         10  50,00\n");
  // printf("Uva globo         5   26,00\n");)
  printf ("------------------------------\n");
  printf ("\x1b[38;5;200mTOTAL.........:%16.2f\n\x1b[0m", 91.00);
  
  return 0;
}