#include <stdio.h>

int
main ()
{
    int preco;
    int desconto;
    
    printf("Fale o preço do produto para o desconto: ");
    scanf("%d", &preco);
    
    desconto = preco - (preco * 10 / 100);
    
    printf("Seu produto com desconto é: %d", desconto);


  return 0;
}
