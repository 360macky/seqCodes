"""
Triangle Numbers on Python

git-repository: https://github.com/360macky/seqCodes
author: Marcelo A.S.

"""
print("Triangle Numbers")

# Solicitamos el término
n = int(input("Ingresa el número de términos de la secuencia de números triangulares"))

i = 1

while i < n:
    z = (i*(i+1))/2
    print(z)
    i+=1