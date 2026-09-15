# Exercício 031: Desenvolva um programa que pergunte a distância de uma viagem em Km. Calcule o preço da passagem, cobrando R$0,50
#por Km para viagens de até 200Km e R$0,45 parta viagens mais longas.
dist = int(input('Digite a distancia: '))
CURTO = 0.5
LONGO = 0.45
LIMITE = 200

if dist < LIMITE:
  print('sua passagem é {}'.format(dist * CURTO))
else:
  print('sua passagem é {}'.format(dist * LONGO))
