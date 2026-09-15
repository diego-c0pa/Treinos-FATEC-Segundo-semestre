#Exercício 027: Faça um programa que leia o nome completo de uma pessoa, mostrando em seguida o primeiro e o último nome
#separadamente.
nome = str(input('Digite seu nome completo: ')).strip()

nome_com = nome.split()
print(nome_com[0], nome_com[-1])
