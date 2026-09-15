/*
Faça um programa para ler as informações de 1000 computadores: preço, valor de reparo. Ao
final, apresente as seguintes informações:
a. A média de preços dos computadores;
b. A média do valor dos reparos;
c. O valor do reparo mais alto e o valor do reparo mais baixo;
d. A porcentagem de computadores com preço superior ou igual a R$ 5.000 e a porcentagem
de computadores com preço inferior a R$ 5.000,00.
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>

//--Variáveis
//Constantes
const int MAX = 5, CEM = 100;
const float LIMITE = 5000;


//item a
float preco_comp, soma_preco, media_comp;

//item b
float valor_rep, soma_rep, media_rep;

//item c
float maior_rep = 0, menor_rep = 1000000;

//item d
int cont_sup = 0, cont_inf = 0;


int main(){//inicio main
setlocale(0, "Portuguese");

for (int i = 1; i <= MAX; i++){//início for
	//coleta de dados
	system("cls");
	printf("Por favor, informe o preço do computador: ");
	scanf("%f", &preco_comp);
	printf("\n\nPor favor, informe o preço do reparo do computador: ");
	scanf("%f", &valor_rep);
	//fim da coleta de dados
	//processamento
	//item a
	soma_preco = preco_comp + soma_preco;
	
	//item b
	soma_rep = valor_rep + soma_rep;
	
	//item c
	if (valor_rep > maior_rep)
		maior_rep = valor_rep;
	
	if (valor_rep < menor_rep)
		menor_rep = valor_rep;
	
	//item D
	if (preco_comp < LIMITE)
		cont_inf++;
		else
			cont_sup++;
		
}//fim do for

//retorno

system("cls");
printf("--Resultados--");

//item a
printf("\n\nA média do preço de todos os computadores é: R$ %0.2f", soma_preco / MAX );

//item b
printf("\n\nA média de preço de todos os reparos dos computadores é: %0.2f", soma_rep / MAX);

//item C
printf("\n\nO valor do maior reparo é: %0.2f", maior_rep);
printf("\nO valor do menor reparo é: %0.2f", menor_rep);

//item D
printf("\n\nA porcetagem de computadores que custam menos que o límite é: %i", cont_inf / MAX * CEM);
printf("\nA porcentagem de computadores que custam mais que o límite é: %i", cont_sup / MAX * CEM);

}
