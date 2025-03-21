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

void Cadastro(){ 
    
}

int main () {
    setlocale(LC_ALL, "Portuguese");
    cadastro Cadastro;

}