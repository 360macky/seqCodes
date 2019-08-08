#include<stdio.h>

int main(){

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
	int n;
	scanf("%d\n", &n);

	// Variable
	//int n = 10;


	int a = 1;
	int b = 2;

	for (size_t i = 0; i < n; i++) {

		// Obtenemos el número mayor
		int sum = a + b;

		// Imprimimos la suma
		printf("%i\n", sum);

		// Switcheamos las variables
		a = b;
		b = sum;

	}





}
