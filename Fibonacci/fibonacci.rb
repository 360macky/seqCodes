# Fibonnaci Sequence on Ruby

# git-repository: https://github.com/360macky/seqCodes
# author: Marcelo A.S.

# Solicitamos el término
puts "Fibonacci"
puts "Ingresa el número de términos de la secuencia de Fibonacci"
n = gets.chomp.to_i

# Restamos 4 numeros
n = n - 4

# Proceso
a = 1
b = 2

puts "++++++++++"

puts 0
puts a
puts a
puts b

i = 0

while i < n
    sum = a + b

    puts sum
    a = b
    b = sum
    i+=1

end