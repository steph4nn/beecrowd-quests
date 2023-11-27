while True:
    n = int(input())
    if n == 0:
        break
    saida = ''
    vetor = list(map(int, input().split()))
    vetorConjunto = set(vetor)
    listaaux = list(vetorConjunto)
    for index, element in enumerate(listaaux):
        count = vetor.count(listaaux[index])
        if count %2 ==1:
            saida+=f'{listaaux[index]} '
    print(saida)