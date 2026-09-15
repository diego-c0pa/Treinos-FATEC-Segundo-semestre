#Exercício 013: Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.
salario_atual = int(input('Digite seu salário atual: '))
AUMENTO = 15

salario_novo = int(salario_atual + (salario_atual * AUMENTO / 100))
print(salario_novo)
