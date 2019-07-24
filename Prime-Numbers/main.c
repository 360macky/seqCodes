#include<stdio.h>

int main(){

  printf("Secuencia de Numeros Primos\n");
	printf("---------------------------\n");
	printf("Term 1 = Number 2\n");
	printf("Term 2 = Number 3\n");
	printf("Term 3 = Number 5\n");
	printf("Term 4 = Number 7\n");
	printf("Term 5 = Number 11\n");
	printf("Term 6 = Number 13\n");
	printf("Term 7 = Number 17\n");
	printf("---------------------------\n");

  int n = 6456;
  int z = n - 2;

  // Result of the modules n%i
  // n = is the number to evaluate
  // z = is the iterator (is not 1 or n)
  int resultArray[z];

  for (size_t i = 2; i < n; i++) {
    int result = n % i;
    int y = i - 2;

    resultArray[y] = result;
    // si el módulo (resultArray[y]) es 0, entonces es divisible.
    // Esto solo se cumple en 2 y en 7
  	//printf("17 mod %i = %i\n", i, resultArray[y]);

    // If is divisible (not for 1, or n) it is not PRIME
    if (resultArray[y] == 0) {
      printf("No es un numero primo\n");
      break;
    }else{
      printf("Es un numero primo\n");
      break;
    }

  }

}
