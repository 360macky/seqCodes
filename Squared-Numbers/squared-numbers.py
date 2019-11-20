"""
Fibonnaci Sequence on Python

git-repository: https://github.com/360macky/seqCodes.git/
author: Marcelo A.S.

"""
print("Squared Numbers")

try:
    n = int(input("Ingresa el número de términos de la secuencia de números cuadrados: "))
except ValueError:
    print("Valor incorrecto")
    n = 0

for i in range(1, n + 1):
    print(i**2)
