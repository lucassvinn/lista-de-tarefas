#include <stdio.h>

int
main ()
{
  int peso;
  float altura;
  float imc;

  printf ("Informe seu peso para mostrar seu IMC: ");
  scanf ("%d", &peso);

  printf ("Informe sua altura: ");
  scanf ("%f", &altura);

  imc = (altura * altura) / peso;

  printf ("Seu IMC é: %f", imc);


  return 0;
}
