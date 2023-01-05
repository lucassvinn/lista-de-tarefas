#include <stdio.h>

int main ()
{
  int number;
  int antecessor;
  int sucessor;

  printf ("Informe um numero: ");
  scanf ("%d", &number);

  antecessor = number - 1;
  sucessor = number + 1;

  printf ("O seu numero informado é: %d\n", number);
  printf ("O antecessor do numero informado é: %d\n", antecessor);
  printf ("O sucessor do numero informado é: %d", sucessor);


  return 0;
}
