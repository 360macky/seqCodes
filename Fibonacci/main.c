#include<stdio.h>

int main(){

	// Screen Title
	printf("+-+-+-+-+-+-+-+-+-+\n");
	printf("|F|i|b|o|n|a|c|c|i|\n");
	printf("+-+-+-+-+-+-+-+-+-+\n");

	// Solicitamos el término
	printf("Ingresa el número de términos de la secuencia de Fibonacci\n");
	int n;

	// Message
	printf("Input the term based in the Fibonacci Sequence\n");
	scanf("%d", &n);

	// We subtract 4 numbers. Why? For Term 1, Term 2 and Term 3
	n = n - 4;

	// Separator line
	printf("+-+-+-+-+-+-+-+-+-+\n");

	// Variables
	int a = 1;
	int b = 2;

	printf("0\n%i\n%i\n%i\n", a, a, b);

	// Loop to generate
	for (size_t i = 0; i < n; i++) {

		// Making the sum
		int sum = a + b;

		// Print the sum
		printf("%i\n", sum);

		// Switching the variables
		a = b;
		b = sum;
	}

}
/*
	@author: Marcelo Arias
	github.com/360macky/sucesiones-C/
*/
