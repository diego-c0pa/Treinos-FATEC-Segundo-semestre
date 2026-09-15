#Exercício 012: Faça um algoritmo que leia o preço de um produto e mostre seu novo preço, com 5% de desconto.
preco = int(input('Digite o preço: '))

novo_preco = int(preco - (preco/20))

print('o novo preço é: ', novo_preco)
