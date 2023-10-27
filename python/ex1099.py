# -*- coding: utf-8 -*-

n = int(input())
for i in range(n):
    soma = 0
    entrada = map(int, input().split())
    a,b = entrada
    c= 0
    if a >b:
        c= b
        b = a
        a =c
    for i in range(a+1,b):
        if i%2!=0:
            soma += i
    print(soma)