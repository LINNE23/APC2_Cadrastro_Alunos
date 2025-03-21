#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*1. **Utilizar os conceitos sobre `typedef`, ponteiro e arquivo.** O uso de alocação dinâmica é opcional.
2. **Os dados do contato devem ser gravados no arquivo utilizando estrutura,** sendo os dados:
a. **Nome** (nome completo do aluno)
b. **Email**
c. **Turma (Por exemplo: 2025-1)**
d. **Nota 1**
e. **Nota 2**
f. **Nota 3**
g. **Média**
h. **Situação** (se média >=6 aprovado, senão reprovado). */


typedef struct { 
    char nome[50];
    char email[50];
    char turma[10];
    float nota1;
    float nota2;
    float nota3;
    float media;
    char situacao[10];
} cadastro;

//criação e/ou abertura dos arquivos para serem manipulados
void carregar_arquivo(){ 
    printf("EM construcao\n");
}

//cadastra os dados de um novo aluno no arquivo
void add_informacao(){
    printf("EM construcao\n");
}

//Função Menu mostra as opções de funcionalidade do sistema
void Menu(){
    int op;
    printf("Bem-Vindo ao Cadrasto Alunos\n");
    do{
     printf("Digite '1' carregar_arquivo - criacao e/ou abertura dos arquivos \n ");
     printf("Digite '2' add_informacao - cadastra os dados de um novo aluno  \n ");
     printf("Digite '3' para Sair \n");
     scanf("%d",&op);
     switch (op)
     {
        case 1:
        carregar_arquivo();
            break;
        case 2:
        add_informacao();
            break;
        case 3:
            printf("Saindoooo.......\n");
                break;
        default:
        printf("Digite o numero invalido\n");
            break;
     }


    }while (op!=3);
    
}
int main () {
    setlocale(LC_ALL, "Portuguese");
    cadastro Cadastro;
    Menu();
}