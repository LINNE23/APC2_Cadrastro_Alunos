#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
# include <string.h>

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

//criação e/ abertura dos arquivos para serem manipulados
void carregar_arquivo(){ 
    FILE *p;
    p = fopen("cadastro.txt","w");
    if(p == NULL){
        printf("Erro de alocacao\n");
    } else {
        printf("Arquivo aberto com sucesso\n");
    }
    fclose(p);
}

//cadastra os dados de um novo aluno no arquivo
void cadastrar_informacao(){
    FILE *p;
    cadastro *c;
    int num,i;

    p = fopen("cadastro.txt","w");
    if(p == NULL) {
        printf("Erro de alocacao\n");
    }
    
    printf("Digite a quantidade de alunos que deseja cadrastar:\n");
    scanf("%d", &num);
    getchar();

    c = (cadastro*)malloc(num * sizeof(cadastro));
    
    if (c==NULL){
        printf("Erro! Sem memoria disponível\n");
    }

    for(i = 0; i < num; i++){
        printf("Digite do %dº nome do aluno:\n", i+1);
        fgets((c+i)->nome, 50, stdin);

        printf("Digite o %dº email do aluno:\n", i+1);
        fgets((c+i)->email, 50, stdin);

        printf("Digite a turma do aluno:\n");
        fgets((c+i)->turma, 10, stdin);

        printf("Digite a nota 1 do aluno:\n");
        scanf("%f", &(c+i)->nota1);

        printf("Digite a nota 2 do aluno:\n");
        scanf("%f", &(c+i)->nota2);

        printf("Digite a nota 3 do aluno:\n");
        scanf("%f", &(c+i)->nota3);
       getchar();

       //situação aluno media >=6? "aprovado" : "reprovado"
       (c+i)->media = ((c+i)->nota1 + (c+i)->nota2 + (c+i)->nota3) / 3;
        if ((c+i)->media >=6){
            strcpy((c+i)->situacao, "Aprovado");
        } else {
            strcpy((c+i)->situacao, "Reprovado");
        }
    }

//imprime no arquivo
    for (i = 0; i < num; i++){
    
        fprintf(p, "Nome: %s\n", (c+i)->nome);
        fprintf(p, "Email: %s\n", (c+i)->email);
        fprintf(p, "Turma: %s\n", (c+i)->turma);
        fprintf(p, "Nota 1: %.2f\n", (c+i)->nota1);
        fprintf(p, "Nota 2: %.2f\n", (c+i)->nota2);
        fprintf(p, "Nota 3: %.2f\n", (c+i)->nota3);
        fprintf(p, "Média: %.2f\n", (c+i)->media);
        fprintf(p, "Situação: %s\n", (c+i)->situacao);
    }

    //imprime na tela
 for (int i = 0; i < num; i++)
 {
        printf("Nome: %s\n", (c+i)->nome);
        printf("Email: %s\n", (c+i)->email);
        printf( "Turma: %s\n", (c+i)->turma);
        printf("Nota 1: %.2f\n", (c+i)->nota1);
        printf("Nota 2: %.2f\n", (c+i)->nota2);
        printf("Nota 3: %.2f\n", (c+i)->nota3);
        printf( "Média: %.2f\n", (c+i)->media);
        printf( "Situação: %s\n", (c+i)->situacao);
 }

    free(c);
    fclose(p);
   
}

//Função Menu mostra as opções de funcionalidade do sistema
void Menu(){
    int op;

    cadastro *Cadastro;
    
    printf("Bem-Vindo ao Cadrasto Alunos\n");
    do  {
        printf("Digite: \n");
        printf("[1] - carregar_arquivo - criacao e/ou abertura dos arquivos \n");
        printf("[2] Cadastro de novos alunos. \n");
        printf("[3] Sair. \n");
        scanf("%d", &op);

            switch (op){

            case 1:
                carregar_arquivo();
                break;

            case 2:
                cadastrar_informacao();
                break;

            case 3:
                printf("Saindoooo.......\n");
                break;

            default:
                printf("Digite o numero invalido\n");
                break;

            }
        } while (op!=3);

}
int main () {
    setlocale(LC_ALL, "Portuguese");
    Menu();
}