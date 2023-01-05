#include <stdio.h>

int main ()
{
    int notaum;
    int notadois;
    int notatres;
    int media;
    
    printf("Informe sua Nota Um: ");
    scanf("%d", &notaum);
    
    printf("Informe sua Nota Dois: ");
    scanf("%d", &notadois);
    
    printf("Informe sua Nota Três: ");
    scanf("%d", &notatres);
    
    media = (notaum + notadois + notatres) / 3;
    
    printf("Sua média é de: %d", media);
    
    
  return 0;
}
