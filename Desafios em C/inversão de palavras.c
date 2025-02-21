#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL "Portuguese");
    char palavra1[20];
    char palavra2[20];
    char palavra3[20];

    printf("Esse programa ira ler tres palavras digitadas e entao te falar as tres na ordem inversa\n\n");
    printf("Digite a primeira palavra: ");
    scanf("%s", &palavra1);
    fflush(stdin);
    printf("Digite a segunda palavra: ");
    scanf("%s", &palavra2);
    fflush(stdin);
    printf("Digite a terceira palavra: ");
    scanf("%s", &palavra3);
    fflush(stdin);
    printf("Aqui estao as palavras na ordem inversa: %s, %s, %s", palavra3, palavra2, palavra1);
return 0;
}
