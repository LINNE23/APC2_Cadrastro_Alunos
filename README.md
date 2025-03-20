# APC2_Cadrastro_Alunos
Trabalho para a disciplina de Algoritmo de Programação 2 do curso Ciências da Computação da UFCAT.
Desenvolvimento em linguagem C, um sistema que faz cadastro das informações dos alunos para uma Universidade. Os dados seram lidos do teclado, e seram cadastrados em um arquivo.txt.

### Sistema CIA – Cadastro de Informações dos Alunos
Você foi contratado para desenvolver parte do sistema que faz o cadastro das informações dos alunos
para uma Universidade. Os dados são lidos do teclado e devem, apenas, serem cadastrados em um arquivo `.txt`
para persistência dos dados.
## Requisitos:

1. **Utilizar os conceitos sobre `typedef`, ponteiro e arquivo.** O uso de alocação dinâmica é opcional.
2. **Os dados do contato devem ser gravados no arquivo utilizando estrutura,** sendo os dados:
a. **Nome** (nome completo do aluno)
b. **Email**
c. **Turma (Por exemplo: 2025-1)**
d. **Nota 1**
e. **Nota 2**
f. **Nota 3**
g. **Média**
h. **Situação** (se média >=6 aprovado, senão reprovado).

3. **O sistema deve permitir as seguintes funcionalidades:**
a. **carregar_arquivo():** criação e/ou abertura dos arquivos para serem manipulados
b. **add_informacao():** cadastra os dados de um novo aluno no arquivo
i. considerando os dados acima definidos para cada aluno
ii. cadastrar os dados no arquivo `Alunos.txt`
c. **menu_principal()** mostra as opções de funcionalidades do sistema, devendo pode ser
executado quantas vezes o usuário solicitar cadastrar novo aluno.
d. **main():** apenas para chamada ao menu.

## Imposições para a implementação:

1. Implementar as funções;
2. Uso de alocação dinâmica para o uso de vetores e matrizes é opcional;
3. Uso de ponteiros para passagem da estrutura com os dados do contato para as funções;
4. Uso de arquivos para gravar os dados cadastrados;