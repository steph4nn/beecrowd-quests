first = map(float, input().split())
second = map(float, input().split())

x1,y1,z1 = first
x2,y2,z2 = second


value1 = y1*z1
value2 = y2*z2

valueT = value1 + value2
print(f"VALOR A PAGAR: R$ {valueT:.2f}")
