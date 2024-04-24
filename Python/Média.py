#Variáveis
nome = str(input('Informe o nome do aluno(a): '))
n1 = float(input(f'Informe a primeira nota de {nome}: '))
n2 = float(input(f'Agora a segunda nota de {nome}: '))
n3 = float(input(f'Por fim, a terceira nota de {nome}: '))

#Cálculo da média
media = (n1 + n2 + n3)/3

#Saída de dados
print(f'O aluno(a) {nome} possuiu uma media de {media:.2}')
if (media>=7):
    print(f'Parabéns {nome}, ficou acima da média!')
else:
    print('Será necessário realizar a prova de recuperação, bons estudos!')
