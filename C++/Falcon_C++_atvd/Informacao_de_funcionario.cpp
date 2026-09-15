/*
Faça um programa para ler as informações de 1500 funcionários: salario, sexo e departamento
(1 ou 2). Ao final apresente as seguintes informações:
a. A média salarial dos funcionários;
b. A média salarial de cada sexo;
c. O salário mais alto e o mais baixo de cada sexo;
d. A quantidade de funcionários de cada sexo;
e. A média salarial de cada departamento;
f. O salário mais alto e o mais baixo de cada departamento;
g. A quantidade de funcionários de cada departamento;
h. A porcentagem de funcionários com salário inferior a R$ 2000,00, a porcentagem
funcionários com salários de R$ 2.000 até R$ 5.000,00 e a porcentagem de funcionários
com salário superior a R$ 5.000,00.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

//const
const int MAX = 5;
const float FAIXA1 = 2000, FAIXA2 = 5000;

//---VARIÁVEIS---\\
//de entrada
float salario;
char sexo;
int departamento;

//item a
float soma_salario = 0;

//item b
float soma_salario_f = 0, soma_salario_m = 0;
int cont_f = 0, cont_m = 0; //item d

//item c
float maior_salario_f = 0, maior_salario_m = 0,
	menor_salario_f = 1000000, menor_salario_m = 1000000;
	
//item e
float soma_salario_dep1 = 0, soma_salario_dep2 = 0;
int cont_dep1 = 0, cont_dep2 = 0; //item g

//item f
float maior_salario_dep1 = 0, maior_salario_dep2 = 0,
	  menor_salario_dep1 = 1000000, menor_salario_dep2 = 1000000;

//item h
int cont_faixa1 = 0, cont_faixa2 = 0, cont_faixa3 = 0;
	  
int main(){ //início main
	setlocale(0, "Portuguese");
	
	for (int i = 1; i <= MAX; i++){
		//Entrada de Dados
		system("cls");
		printf("Funcionário: %i", i);
		printf("\n\nSalário: ");//salário
		scanf("%f", &salario);
		
		printf("\n\nSexo [F] ou [M]:");//sexo
		sexo = getch();
		
		printf("\n\nDepartamento [1] ou [2]: ");//departamento
		scanf("%i", &departamento);
		
		//processamento
		//item a
		soma_salario = soma_salario + salario;
		
		//item b
		if (sexo == 'f' || sexo == 'F'){
			soma_salario_f = soma_salario_f +salario;
			cont_f++;//item d
			
			//item c
			if (salario > maior_salario_f)
				maior_salario_f = salario;
			
			if (salario < menor_salario_f)
				menor_salario_f = salario;
		}
		else{
			soma_salario_m = soma_salario_m + salario;
			cont_m++;//item d
			
			//item c
			if (salario > maior_salario_m)
				maior_salario_m = salario;
			
			if (salario < menor_salario_m)
				menor_salario_m = salario;
				
				}
		//item e
		if (departamento ==1){
			soma_salario_dep1 = soma_salario_dep1 + salario;
			cont_dep1++; //item g
			
			//item f
			if (salario > maior_salario_dep1)
				maior_salario_dep1 = salario;
			
			if (salario < menor_salario_dep1)
				menor_salario_dep1 = salario;
			
		}
		else{
			soma_salario_dep2 = soma_salario_dep2 + salario; 
			cont_dep2++; //item g
			
			//item f
			if (salario > maior_salario_dep2)
				maior_salario_dep2 = salario;
			
			if (salario < menor_salario_dep2)
				menor_salario_dep2 = salario;
			
		}
			//item h
			if (salario < FAIXA1)
				cont_faixa1++;
			else
				if (salario <= FAIXA2)
					cont_faixa2++;
				else
					cont_faixa3++;
		
		
		
	}//fim do for
	
	//Saída
	
	system("cls");
	printf("-- Resultados --");
	
	
	//item a
	printf("\n\nMédia Salarial: R$ %0.2f", soma_salario/MAX);
	
	//item b
	printf("\n\nMédia salarial - Feminino: R$ %0.2f", soma_salario_f/cont_f);
	printf("\nMédia salarial - Masculino: R$ %0.2f", soma_salario_m/cont_m);

	//item c
	printf("\n\nMaior Salário - Feminino: R$ %0.2f", maior_salario_f);
	printf("\nMenor Salário - Feminino: R$ %0.2f", menor_salario_f);
	
	printf("\n\nMaior Salário - Masculino: R$ %0.2f", maior_salario_m);
	printf("\nMenor Salário - Masculino: R$ %0.2f", menor_salario_m);
	
	//item D
	printf("\n\nQtd - Feminino : %i", cont_f);
	printf("\nQtd - Masculino : %i", cont_m);
	
	//Item E
	printf("\n\nMédia salarial - DEP 1: R$ %0.2f", soma_salario_dep1/cont_dep1);
	printf("\nMédia salarial - DEP 2: R$ %0.2f", soma_salario_dep2/cont_dep2);
	
	//item f
	printf("\n\nMaior salário - DEP 1: R$ %0.2f", maior_salario_dep1);
	printf("\nMaior salário - DEP 2: R$ %0.2f", maior_salario_dep2);
	
	//item g
	printf("\n\nQtd de funcionários - DEP 1: %i", cont_dep1);
	printf("\nQtd de funcionários - DEP 2: %i", cont_dep2);
	
	//item h
	printf("\n\nFuncionários na Faixa 1: %0.2f %%", cont_faixa1*1.0/MAX*100);
	printf("\nFuncionários na Faixa 2: %0.2f %%", cont_faixa2*1.0/MAX*100);
	printf("\nFuncionários na Faixa 3: %0.2f %%", cont_faixa3*1.0/MAX*100);
	
	}
//fim main
