#Exercício 017: Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo.
#Calcule e mostre o comprimento da hipotenusa.
from math import hypot
cat_op = int(input('Digite o cateto oposto: '))
cat_ad = int(input('Digite o cateto adjacente: '))

hipotenusa = hypot(cat_ad, cat_op)

print(hipotenusa)
