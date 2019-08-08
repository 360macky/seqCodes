#include<stdio.h>

int main(){

	int n;

	printf("Secuencia de Fibonacci\n");
	printf("----------------------\n");
	printf("Term 1 = Number 0\n");
	printf("Term 2 = Number 1\n");
	printf("Term 3 = Number 1\n");
	printf("Term 4 = Number 2\n");
	printf("Term 5 = Number 3\n");
	printf("Term 6 = Number 5\n");
	printf("Term 7 = Number 8\n");
	printf("----------------------\n");

	// Solicitamos el término
	printf("Input the term based in the Fibonacci Sequence\n");
	scanf("%i\n", n);

	int count = 4;
	int zero = 0; //  Término 1
	int once = 1; // Término 2

	// Fibonacci Sequence
	/for (size_t i = 0; i < count; i++) {
		// Si el término es 6, entonces lo repetiremos
		//un total de 6-2 veces, es decir 4 veces:
		int a = zero + once;
		int b = once + a;
		printf("%i\n", i);
	}

	// A es el número anterior a B
	// B es el número presente
	// C es el siguiente término
	// A + B = C

	// término N - 2 = veces N









}
