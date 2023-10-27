# -*- coding: utf-8 -*-

entrada  = map(int, input().split())
codigo, quantidade = entrada

product = {1:4.00, 2:4.50, 3:5.00, 4:2.00,5:1.50}

total = product[codigo]*quantidade
print(f"Total: R$ {total:.2f}")
