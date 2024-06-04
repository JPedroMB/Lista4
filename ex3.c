#include <stdio.h>

//Em uma fábrica, são produzidos 7 tipos de mercadorias, as quais são identificadas por uma letra: ‘a’, ‘b’, ‘c’, ‘d’, ‘e’, ‘f’ e ‘g’. Ao final do expediente, é gerado um relatório de quais e quantas mercadorias foram feitas nesse dia. Escreva um programa que gere o relatório descrito, solicitando ao usuário, tudo o que foi produzido no dia

int main() {
    
    int contagem[7] = {0};  
    char mercadoria;

   
    printf("Digite as mercadorias produzidas hoje (letras de 'a' a 'g', termine com '.'): ");

   
    while (1) {
        scanf(" %c", &mercadoria);
        if (mercadoria == '.') {
            break;
        }

      
        if (mercadoria >= 'a' && mercadoria <= 'g') {
            contagem[mercadoria - 'a']++;
        } else {
            printf("Mercadoria invalida: %c\n", mercadoria);
        }
    }

    printf("\nRelatório de Produção do Dia:\n");
    printf("Mercadoria\tQuantidade\n");
    for (int i = 0; i < 7; i++) {
        printf("%c\t\t%d\n", 'a' + i, contagem[i]);
    }

    return 0;
}