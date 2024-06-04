#include <stdio.h>
#include <ctype.h>

 //Escreva um programa que solicite uma frase ao usuário e apresente a mesma frase com todos os caracteres em maiúsculo e outra com todos em minúsculo.

int main() {
    char frase[1000];
    int i;

   
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    size_t len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }


    char frase_maiuscula[1000];
    strcpy(frase_maiuscula, frase);
    for (i = 0; frase_maiuscula[i]; i++) {
        frase_maiuscula[i] = toupper(frase_maiuscula[i]);
    }

    char frase_minuscula[1000];
    strcpy(frase_minuscula, frase);
    for (i = 0; frase_minuscula[i]; i++) {
        frase_minuscula[i] = tolower(frase_minuscula[i]);
    }


    printf("Frase em maiúsculas: %s\n", frase_maiuscula);
    printf("Frase em minúsculas: %s\n", frase_minuscula);

    return 0;
}