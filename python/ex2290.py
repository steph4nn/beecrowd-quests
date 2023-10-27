while True:
    saida = []
    n = int(input())
    if n == 0:
        break
    vetor = list(map(int, input().split()))
    vetorConjunto = set(vetor)
    listaaux = list(vetor)
    for i in range(len(listaaux)):
        count = vetor.count(listaaux[i])
        if count %2 ==1:
            saida.append(listaaux[i])
    strings = [str(numero) for numero in saida]
    print(' '.join(sorted(strings)))