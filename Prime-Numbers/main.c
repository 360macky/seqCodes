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

/*	Un bucle para encontrar los números primos	*/

int n = 67;
int i = 0;
int limit = 4;




// Conditional n%{2,3,5,7}==0

if(n%2==0){
	printf("Divisible by 2");
	int divisible = 0;
}else{
	int divisible = 1;
	printf("Not divisible by 2");
}

if(n%3==0){
	printf("Divisible by 3");
	int divisible = 0;
}else{
	int divisible = 1;
	printf("Not divisible by 3");
}

if(n%5==0){
	printf("Divisible by 5");
	int divisible = 0;
}else{
	int divisible = 1;
	printf("Not divisible by 5");
}

if(n%7==0){
	printf("Divisible by 7");
	int divisible = 0;
}else{
	int divisible = 1;
	printf("Not divisible by 7");
}



/* Try */ /* Default case = 4 try */
//for (i; i<limit; i++){
	//if(n%2==0){
		
	//}
//}

/*
	NÚMERO PRIMO:
	- Sólo Divisible entre UNO y por el mismo NÚMERO (All numbers)
	- No es divisible por ningún otro número.
	- No es UNO por definición

	uniqueNumbers = {2,3,5,7,...}

	If 'n' is the 'itself' number.
	We try divide 'n' by 'uniqueNumbers', except if one number of 'uniqueNumbers'


	TEST ALGORÍTMICO (dado n=67)

	¿n%2 = 0? FALSE
	¿n%3 = 0? FALSE
	¿n%5 = 0? FALSE
	¿n%7 = 0? FALSE

	If everything before = FALSE {
		'n' = 'primeNumber'
	}
	


*/


}
