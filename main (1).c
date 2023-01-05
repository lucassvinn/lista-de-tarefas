#include <stdio.h>

int main()
{
    //Declarações
    int salario;
    int saliqui;
    
    //Instruções
    printf("Informe seu salário: ");
    scanf("%d", &salario);
    
    saliqui = salario - (salario * 15 / 100);
    
    printf("Seu salário liquidado é de: %d", saliqui);
    
    
    
    return 0;
}
