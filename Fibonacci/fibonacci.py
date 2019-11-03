"""
Fibonnaci Sequence on Python

git-repository: https://github.com/360macky/seqCodes.git/
author: Marcelo A.S.

"""
print("Fibonacci")

try:
    n = int(input("Ingresa el número de términos de la secuencia de Fibonacci: "))
except ValueError:
    print("Valor incorrecto")
    n = 0

n -= 4

a = 1
b = 2

print("0\n1\n1\n2")

i = 0

while i < n:
    sum_n = a + b
    print(sum_n)
    a = b
    b = sum_n
    i+=1