#include <stdio.h>

int main ()
{
    int preco;
    int cliente;
    int troco;
    
    printf("Deseja comprar o produto? Compre-o: ");
    scanf("%d", &cliente);
    
    preco = 20;
    troco = cliente - preco;
    
    printf("Seu troco é de: %d", troco);
    
  return 0;
}
