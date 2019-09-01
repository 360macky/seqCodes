#include<stdio.h>

int main(){

  printf("Secuencia de Numeros Primos\n");
	printf("---------------------------\n");

  // Definir las variables
  int n;
  int module;
  int iterator;
  int start;

  printf("Ingresa el numero limite\n");
  scanf("%i", &n);

  // Definir un array empezando desde 2, porque 1 no es un número primo. Entonces lo descartamos.
  for (start=2; start<=n; start++) {

    // Para este array, hemos 'modulizado' cada número siguiendo esta regla:
    //  n % x = 0 {x = 1, x = n}
    //  n % y = 1 {x != 1, x != n}
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
