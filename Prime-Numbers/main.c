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


  int resultArray[12];

  for (size_t i = 2; i < 14; i++) {
    int result = 14 % i;

    int y = i - 2;
    resultArray[y] = result;
    // si el módulo (resultArray[y]) es 0, entonces es divisible.
    // Esto solo se cumple en 2 y en 7
  	printf("14 mod %i = %i\n", i, resultArray[y]);

  }


}
