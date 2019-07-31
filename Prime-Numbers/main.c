#include<stdio.h>

int main(){

  printf("Secuencia de Numeros Primos\n");
	printf("---------------------------\n");

  // Initializing Variables
  int n;
  int module;
  int iterator;
  int start;

  printf("Ingresa el numero limite\n");
  scanf("%i\n", &n);

  // Define an array of numbers since 2 (bcoz 1 not for be a prime Number), to N number.
  for (start=2; start<=n; start++) {

    // For this array, we have to modulize each number following this rule:
    // - n % x = 0 {x = 1, x = n}
    // - n % y = 1 {x != 1, x != n}
    // NOTE: { n = start++, x = module }

      // For a While, start is a constant
      // And in the following 'for()', we module that constant 'start'
      // with the variable 'module'. Like constant % variable
      for (module=2; module<=start; module++){

          // Start to evaluate each number for module
          if (start % module == 0) {
            iterator++;
          }

      }
      if (iterator==1) {
        printf("%d\n", start);
      }
      iterator=0;
  }

}
