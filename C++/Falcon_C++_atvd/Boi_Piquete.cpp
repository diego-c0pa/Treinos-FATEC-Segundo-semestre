/*
Faça um programa para ler as informações de 200 bois: peso, idade (em meses) e o piquete (1, 2
ou 3). Ao final apresentar as seguintes informações:
a. A média dos pesos e das idades;
b. O peso do boi mais pesado e o boi mais pesado;
c. A média de pesos dos bois de cada piquete;
d. A média de idades dos bois de cada piquete;
e. A porcentagem de bois com idade acima de 18 meses e com peso acima de 500 kg;
f. A quantidade de bois de cada piquete;
g. A porcentagem de bois de cada piquete.
*/

// Includes
#include <stdio.h>
#include <windows.h>
#include <locale.h>

// -- Constantes --

const int MAX = 6, IDADE_MINIMA = 18;
const float PESO_MINIMO = 500;

// -- Variáveis --

// Variáveis de entrada
float peso;
int idade, piquete;

// Item A
float soma_peso = 0;
int soma_idade = 0;

// Item B 
float maior_peso = 0, menor_peso = 5000;

// Item C: divisão por piquete
float soma_peso1 = 0, soma_peso2 = 0, soma_peso3 = 0;
int cont_boi1 = 0, cont_boi2 = 0, cont_boi3 = 0;

// Item D
int soma_idade1 = 0, soma_idade2 = 0, soma_idade3 = 0;

// Item E
int cont_requisito = 0;


int main() { // Início main
    // Configurando idioma para português
    setlocale(LC_ALL, "Portuguese");
    
    // Loop para coletar os dados dos bois
    for (int i = 1; i <= MAX; i++) {
        
        // Cadastro de peso
        system("cls");
        printf("----------------");
        printf("\n|    Boi: %i", i);
        printf("\n|    Peso: ");
        scanf("%f", &peso);
        
        // Cadastro de idade
        printf("\n|    Idade (em meses): ");
        scanf("%i", &idade);
        
        // Separação do piquete
        printf("\n|    Piquete");
        printf("\n|    [1] - Piquete 1");
        printf("\n|    [2] - Piquete 2");
        printf("\n|    [3] - Piquete 3");
        printf("\n|    ==> ");
        scanf("%i", &piquete);
        
        // Processamento
        // Item A
        soma_peso = soma_peso + peso;
        soma_idade = soma_idade + idade;
        
        // Item B
        if (peso > maior_peso) {
            maior_peso = peso;
        }
        if (peso < menor_peso) {
            menor_peso = peso;
        }
        
        // Item C, D
        if (piquete == 1) {
            soma_peso1 = soma_peso1 + peso;
            soma_idade1 = soma_idade1 + idade; // Corrigido: antes estava somando soma_peso1
            cont_boi1++;
        }
        else if (piquete == 2) {
            soma_peso2 = soma_peso2 + peso;
            soma_idade2 = soma_idade2 + idade; // Corrigido
            cont_boi2++;
        }       
        else {
            soma_peso3 = soma_peso3 + peso;
            soma_idade3 = soma_idade3 + idade; // Corrigido
            cont_boi3++;
        }
        
        // Item E
        if (peso > PESO_MINIMO && idade > IDADE_MINIMA) {
            cont_requisito++;
        }
        
    } // Fim do loop for
    
    // Retorno de dados
    system("cls");
    printf("-- Resultados --");
    
    // Item A
    printf("\nMédia dos pesos: %0.2f kg", soma_peso/MAX);
    printf("\nMédia das idades: %i meses", soma_idade/MAX);
    
    // Item B
    printf("\n\nMaior peso: %0.2f Kg", maior_peso);
    printf("\n\nMenor peso: %0.2f Kg", menor_peso);
    
    // Item C (Atenção: Se algum piquete ficar com 0 bois, a divisão por 0 pode causar erro)
    printf("\n\nMédia de pesos dos bois de cada piquete: ");
    if (cont_boi1 > 0) printf("\n[1] - %0.2f Kg", soma_peso1/cont_boi1);
    if (cont_boi2 > 0) printf("\n[2] - %0.2f Kg", soma_peso2/cont_boi2);
    if (cont_boi3 > 0) printf("\n[3] - %0.2f Kg", soma_peso3/cont_boi3);
    
    // Item D
    printf("\n\nMédia de idade dos bois de cada piquete: ");
    if (cont_boi1 > 0) printf("\n[1] - %i meses", soma_idade1/cont_boi1);
    if (cont_boi2 > 0) printf("\n[2] - %i meses", soma_idade2/cont_boi2);
    if (cont_boi3 > 0) printf("\n[3] - %i meses", soma_idade3/cont_boi3);
    
    // Item E
    printf("\n\nPorcentagem de bois que cumprem os requisitos: %0.2f %%", cont_requisito * 1.0 / MAX * 100);
    
    // Item F, G
    printf("\n\nBois em cada piquete: ");
    printf("\n[1] - %i bois - %0.2f %%", cont_boi1, cont_boi1 * 1.0 / MAX * 100);
    printf("\n[2] - %i bois - %0.2f %%", cont_boi2, cont_boi2 * 1.0 / MAX * 100);
    printf("\n[3] - %i bois - %0.2f %%", cont_boi3, cont_boi3 * 1.0 / MAX * 100); 
    
    return 0;
} // Fim main
