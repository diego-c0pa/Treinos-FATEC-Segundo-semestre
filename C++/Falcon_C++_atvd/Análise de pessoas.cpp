/*
Uma empresa está fazendo análise de 1000 pessoas que visitam um shopping na cidade. Os
seguintes dados são obtidos das pessoas:
i. Salário
ii. Altura
iii. Sexo (Masculino ou Feminino)
Faça um algoritmo para mostrar, ao final do processamento, os seguintes dados:
a. A média salarial e a média das alturas;
b. O salário mais alto e o mais baixo;
c. A altura mais alta e a mais baixa;
d. A média salarial de cada sexo;
e. Quantas pessoas são do sexo masculino e quantas são do sexo feminino;
f. Porcentagem de pessoas do sexo masculino e do sexo feminino;
*/

///includes
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

///constantes
const int MAX = 5;
///var
float salario, soma = 0, maior = 0, menor = 100000;

///sexo
char sexo;
float soma_f = 0, cont_f = 0;
int soma_m = 0, cont_m = 0;

///altura
float altura, soma_altura = 0, maior_altura =3;

int main(){
	setlocale(0, "Portuguese");
	
	for (int i = 1;i <= MAX; i++	){
		system("cls");
		printf("Pessoa %i", i);
		printf("\nSalário R$");
		scanf("%f", &salario);
		soma = soma + salario;
		
		do {
			printf();
		}
		
		
		do{
		system("cls");
		printf("\nSexo: ");
		printf("\n[F] - Feminino\n[M] - Masculino");
		printf("\n==>");
		sexo = getche();
		} while( sexo != 'f' && sexo != 'F' &&
				sexo != 'm' && sexo != 'M');
		
		do{		
			printf("\nAltura: ");
			scanf("%f", &altura);	
		}while (altura <= 0.5)

				
		if (altura > maior_altura){
				maior_altura = altura; 
		}
		if (altura > menor_altura){
				menor_altura = altura; 
		}		
		
		if(salario > maior){
			maior = salario;
		}
		
		if (salario < menor){
			menor =salario;
		}
		
		if (sexo == 'f' || sexo == 'F'){
			soma_f = soma_f + salario;
			cont_f++;
		}
		else{
			soma_m = soma_m + salario;
			cont_m++;
		}
		
		
		
		
	} ///fim do for
	
	system("cls");
	printf("\Média Salarial: R$ %0.2f", soma/MAX);
	printf("\nMaior Salário: R$ %0.2f", maior);
	printf("\nMenor Salário: R$ %0.2f", menor);
	
	printf("\nMédia Salarial - Feminino: R$ %0.2f", soma_f/cont_f);
	printf("\nFeminino: %i", cont_f);
	
	printf("\nMédia Salarial - Masculino: R$ %0.2f", soma_m/cont_m);
	printf("\nMasculino: %i", cont_m);
	
	
	printf("\nMédia da altura: %0.2f", soma_altura/MAX);
	printf("\nMaior altura: %0,2f", maior_altura );
	printf("\nMenor altura: %0,2f", menor_altura );
	
} ///fim do main
