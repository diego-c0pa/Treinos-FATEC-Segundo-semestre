#Exercício 032: Faça um programa que leia um ano qualquer e mostre se ele é bissexto.
ano = int(input('Digite um ano: '))

if ano % 4 == 0 or ano % 100 == 0 and ano % 400 == 0:
  print('ano é bissexto')
else:
  print('ano não é bissexto')
