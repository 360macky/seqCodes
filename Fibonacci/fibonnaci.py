"""
Fibonnaci Sequence on Python

git-repository: https://github.com/360macky/suceCodes
author: Marcelo A.S.

"""
print("Fibonnaci")

# Solicitamos el término
n = int(input("Ingresa el número de términos de la secuencia de Fibonacci"))

# Restamos 4 números
n = n - 4

# Proceso
a = 1
b = 2

print("0\n1\n1\n2")

i=0

while i < n:

    sum = a + b

    print(sum)

    a = b
    b = sum

    i+=1