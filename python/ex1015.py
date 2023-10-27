# -*- coding: utf-8 -*-
import math

first = map(float,input().split())
second = map(float,input().split())
x1,y1 = first
x2,y2 = second

result = math.sqrt((x1 - x2)**2 + (y1 - y2)**2)
print(f'{result:.4f}')