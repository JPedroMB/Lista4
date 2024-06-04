#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char nome[100][100], curso[100][100];
int matricula[100], totalAlunos = 0;

void criar(){
    if (totalAlunos < 100)
    {
        printf("\nDigite o nome do aluno: ");
        scanf(" %[^\n]", nome[totalAlunos]);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &matricula[totalAlunos]);

        printf("Digite o curso do aluno: ");
        scanf(" %[^\n]", curso[totalAlunos]);

        totalAlunos++;

        printf("\nAluno cadastrado com sucesso!\n");

    } else {
        printf("Maximo de alunos atingido.");
    }
    
}

void deletar(){
    int i, j, matriculaIns;

    printf("Insira a matricula do aluno que deseja deletar: ");
    scanf("%d", &matriculaIns);

    for (i = 0; i < totalAlunos; i++){
        if (matricula[i] == matriculaIns) {
            for (j = i; j < totalAlunos - 1; j++){
                matricula[j] = matricula[j + 1];
                strcpy(nome[j], nome[j + 1]);
                strcpy(curso[j], nome[j + 1]);
            }
            totalAlunos--;
            printf("Aluno removido com sucesso!\n");
            return;
        }

        
    }
    printf("Matricula nao encontrada!\n");
}

void apresentarDados(){
    int i;
    printf("\nDados dos alunos:\n\n");
    for (i = 0; i < totalAlunos; i++)
    {
        printf("Matricula: %d, Nome: %s, Curso: %s\n", matricula[i], nome[i], curso[i]);
    }
    
}

void buscarDados(){
    int op, i;
    char busca[100];

    printf("\n Como deseja buscar dados: \n");
    printf("\n1. Por matricula.\n");
    printf("2. Por nome.\n");
    printf("3. Por curso.\n");
    printf("Escolha a opcao: ");
    scanf("%d", &op);

    if (op == 1) {

        printf("Digite a matricula que deseja: ");
        int matriculaInse;
        scanf("%d", &matriculaInse);

        for (i = 0; i < totalAlunos; i++)
        {
            if (matricula[i] == matriculaInse)
            {
                printf("\nmatricula: %d, Aluno: %s, curso: %s", matricula[i], nome[i], curso[i]);
            }
            
        }
        
        
    } else if (op == 2) {
        printf("Digite o nome que deseja: ");
        scanf(" %[^\n]", busca);

        for (i = 0; i < totalAlunos; i++)
        {
            if (strstr(nome[i], busca))
            {
                printf("\nmatricula: %d, Aluno: %s, curso: %s", matricula[i], nome[i], curso[i]);
            }
        }

    } else if (op == 3) {
        printf("Digite o curso que deseja: ");
        scanf(" %[^\n]", busca);

        for (i = 0; i < totalAlunos; i++)
        {
            if (strstr(curso[i], busca))
            {
                printf("matricula: %d, Aluno: %s, curso: %s", matricula[i], nome[i], curso[i]);
            }
            
        }

        
    } else {
        printf("Operacao não encontrada!");

    }
    
}

int main() {

    int i = 0, op;

    while (i < 1)
    {
        printf("\nMenu:\n");
        printf("1. Inserir dados\n");
        printf("2. Remover dados\n");
        printf("3. Apresentar dados\n");
        printf("4. Buscar dados especificos\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
            criar();
    } else if (op == 2){
        deletar();
    } else if (op == 3){
        apresentarDados();
    } else if (op == 4){
        buscarDados();
    } else if (op == 5){
        printf("Saindo do programa...");
        i = 1;
    } else {
        printf("Opção inválida! Tente novamente.\n");
    }
    }
    
}


