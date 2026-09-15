#Exercício 018: Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.
import math
ang = float(input('angulo: '))

seno = math.sin(math.radians(ang))
coseno = math.cos(math.radians(ang))
tangente = math.tan(math.radians(ang))

print('Sen {:.2f}'.format(seno))
print('Cos {:.2f}'.format(coseno))
print('Tang {:.2f}'.format(tangente))
