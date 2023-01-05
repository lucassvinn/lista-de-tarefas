#include <stdio.h>

int main ()
{
    int base;
    int altura;
    int area;
    
    printf("Informe o tamanho da base do retângulo: ");
    scanf("%d", &base);
    
    printf("Informe a altura do retângulo: ");
    scanf("%d", &altura);
    
    area = base * altura;
    
    printf("A base do seu retângulo é de: %d", area);
    
    
  return 0;
}
