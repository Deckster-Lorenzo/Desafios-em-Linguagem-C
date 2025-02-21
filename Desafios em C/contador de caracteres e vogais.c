//codigo que conta vogais a, e , i ,o ,u.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    char texto[50];
    int i, ok;
    int ca,ce,ci,co,cu;
    ca = ce = ci = co = cu = 0;
    printf("Digite um texto: \n");
    fgets(texto, 50, stdin);
    fflush(stdin);

    ok = strlen(texto);
    printf("Número de caracteres no texto  inserido: %d\n\n", ok);

    for(i=0;i<=ok;i++){
        if(texto[i] == 'A' || texto[i] == 'a'){
            ca++;
        }else if(texto[i] == 'E' || texto[i] == 'e'){
            ce++;
        }else if(texto[i] == 'I' || texto[i] == 'i'){
            ci++;
        }else if(texto[i] == 'O' || texto[i] == 'o'){
            co++;
        }else if(texto[i] == 'U' || texto[i] == 'u'){
            cu++;
        }
    }
    printf("O número de letras 'a'ou 'A' é de: %d\n", ca);
    printf("O número de letras 'e'ou 'E' é de: %d\n", ce);
    printf("O número de letras 'i'ou 'I' é de: %d\n", ci);
    printf("O número de letras 'o'ou 'O' é de: %d\n", co);
    printf("O número de letras 'u'ou 'U' é de: %d\n", cu);





    return 0;
}
