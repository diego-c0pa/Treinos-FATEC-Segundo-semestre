/*
Faça um programa para ler as informações de 50 alunos: nota e sexo. Ao final, apresente as
seguintes informações:
a. A média de notas dos alunos;
b. A maior nota e a menor nota;
c. A porcentagem de alunos aprovados e reprovados (nota de aprovação é 5,0);
d. A média de notas de cada sexo;
e. A porcentagem de alunos do sexo masculino e do sexo feminino;
f. A porcentagem de alunos aprovados e de reprovados de cada sexo;
*/

//Include
#include <stdio.h>
#include <windows.h>
#include <locale.h>

//Constantes0
const int MAX = 5;
const int APROVADO = 5;

//Variáveis
float nota;
char sexo;
//Item A
float soma_notas = 0;
//Item B
float maior_nota = 0, menor_nota = 10;
//Item C
int qtd_aprovados = 0, qtd_reprovados = 0;
//Item D e E
float soma_notas_masculino = 0, soma_notas_feminino = 0;
//Item D e E 
int qtd_masculino = 0, qtd_feminino = 0;
//Item F
int qtd_aprovados_masculino = 0, qtd_reprovados_masculino = 0, qtd_aprovados_feminino = 0, qtd_reprovados_feminino = 0;


int main() {//Início do main
    //Setando a linguagem para português
    setlocale(0, "Portuguese");
    

    //Início do For
    for (int i = 0; i < MAX; i++){
        
        printf("Digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &nota);
    
        printf("Digite o sexo do aluno %d (M/F): \n", i + 1);
        scanf(" %c", &sexo);

        //item A
        soma_notas = soma_notas + nota;

        //item B
        if (nota > maior_nota){
            maior_nota = nota;
        }
        if (nota < menor_nota){
            menor_nota = nota;
        }

        //item C
        if (nota >= APROVADO){
            qtd_aprovados++;
        } else {
            qtd_reprovados++;
        }
        //item D
        if (sexo == 'M' || sexo == 'm'){
            soma_notas_masculino = soma_notas_masculino + nota;
            qtd_masculino++;
            //item F
            if (nota >= APROVADO){
                qtd_aprovados_masculino++;
            } else {
                qtd_reprovados_masculino++;
            }
        } else if (sexo == 'F' || sexo == 'f'){
            soma_notas_feminino = soma_notas_feminino + nota;
            qtd_feminino++;
            //item F
            if (nota >= APROVADO){
                qtd_aprovados_feminino++;
            } else {
                qtd_reprovados_feminino++;
            }
        } else {
            printf("Sexo inválido. Digite M ou F.\n");
        }
    }//Fim do For
    system("cls");
    //Retornando os valores
    printf("---Resultados:---\n");
    //Item A
    printf("A média de notas dos alunos é: %.2f\n\n", soma_notas / MAX);
    //item B
    printf("A maior nota é: %.2f\n", maior_nota);
    printf("A menor nota é: %.2f\n\n", menor_nota);
    //item C
    printf("A porcentagem de alunos aprovados é: %.2f%%\n", (float)qtd_aprovados / MAX * 100);
    printf("A porcentagem de alunos reprovados é: %.2f%%\n\n", (float)qtd_reprovados / MAX * 100);
    //item D
    printf("A média de notas dos alunos do sexo masculino é: %.2f\n", soma_notas_masculino / qtd_masculino);
    printf("A média de notas dos alunos do sexo feminino é: %.2f\n\n", soma_notas_feminino / qtd_feminino);
    //item E
    printf("A porcentagem de alunos do sexo masculino é: %.2f%%\n", (float)qtd_masculino / MAX * 100);
    printf("A porcentagem de alunos do sexo feminino é: %.2f%%\n\n", (float)qtd_feminino / MAX * 100);
    //item F
    printf("A porcentagem de alunos do sexo masculino aprovados é: %.2f%%\n", (float)qtd_aprovados_masculino / qtd_masculino * 100);
    printf("A porcentagem de alunos do sexo masculino reprovados é: %.2f%%\n", (float)qtd_reprovados_masculino / qtd_masculino * 100);
    printf("A porcentagem de alunos do sexo feminino aprovados é: %.2f%%\n", (float)qtd_aprovados_feminino / qtd_feminino * 100);
    printf("A porcentagem de alunos do sexo feminino reprovados é: %.2f%%\n", (float)qtd_reprovados_feminino / qtd_feminino * 100);



}//Fim do int main
