#include <stdio.h>
#include <string.h>

//Escreva um programa que solicite 10 palavras ao usuário e informe qual delas é a maior e a menor em termos de quantidade de caracteres.

int main() {
    char palavras[10][100]; 
    int i;
    char maior_palavra[100];
    char menor_palavra[100];

   
    for (i = 0; i < 10; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%99s", palavras[i]);
    }


    strcpy(maior_palavra, palavras[0]);
    strcpy(menor_palavra, palavras[0]);


    for (i = 1; i < 10; i++) {
        if (strlen(palavras[i]) > strlen(maior_palavra)) {
            strcpy(maior_palavra, palavras[i]);
        }
        if (strlen(palavras[i]) < strlen(menor_palavra)) {
            strcpy(menor_palavra, palavras[i]);
        }
    }


    printf("A maior palavra e '%s' com %lu caracteres.\n", maior_palavra, strlen(maior_palavra));
    printf("A menor palavra e '%s' com %lu caracteres.\n", menor_palavra, strlen(menor_palavra));

    return 0;
}