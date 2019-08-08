#include<stdio.h>

int main(){
	printf("+-+-+-+-+-+-+-+-+-+\n");
	printf("|F|i|b|o|n|a|c|c|i|\n");
	printf("+-+-+-+-+-+-+-+-+-+\n");

	// Solicitamos el término
	printf("Input the term based in the Fibonacci Sequence\n");
	int n;
	scanf("%d", &n);

	// Restamos 2 números, a causa del término 1, término 2 y término 3
	n = n - 4;

	// Un poco de diseño
	printf("+-+-+-+-+-+-+-+-+-+\n");

	// Variable
	int a = 1;
	int b = 2;

	printf("0\n%i\n%i\n%i\n", a, a, b);

	for (size_t i = 0; i < n; i++) {

		// Obtenemos el número mayor
		int sum = a + b;

		// Imprimimos la suma
		printf("%i + %i = %i\n", a, b, sum);

		// Switcheamos las variables
		a = b;
		b = sum;
	}
}
