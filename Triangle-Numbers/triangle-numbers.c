/*
Triangle-Numbers on C

git-repository: https://github.com/360macky/seqCodes
author: Marcelo A.S.
*/

#include<stdio.h>

int main(){

	// Screen Title
  printf("+-+-+-+-+-+-+-+-+\n");
  printf("|T|R|I|A|N|G|L|E|\n");
  printf("+-+-+-+-+-+-+-+-+\n");

  // Variable para el Input
  int n;

	// Mensaje
  printf("Input the term based in the Triangle-Numbers Sequence\n");
  scanf("%d", &n);

  // Línea separadora
  printf("+-+-+-+-+-+-+-+-+\n");

  // Ciclo para generar la secuencia
  for (size_t i = 1; i < n; i++) {

    // Aplicamos la fórmula
    int z = (i*(i+1))/2;

    // Imprimir el número
    printf("%i\n", z);

  }

}
