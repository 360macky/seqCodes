#include<stdio.h>

int main(){

	// Screen Title
  printf("+-+-+-+-+-+-+-+-+\n");
  printf("|T|R|I|A|N|G|L|E|\n");
  printf("+-+-+-+-+-+-+-+-+\n");

  // Variable for Input
  int n;

	// Message
  printf("Input the term based in the Triangle-Numbers Sequence\n");
  scanf("%d", &n);

  // Separator line
  printf("+-+-+-+-+-+-+-+-+\n");

  // Loop to generate
  for (size_t i = 1; i < n; i++) {

    // Apply the formula
    int z = (i*(i+1))/2;

    // Print the number
    printf("%i\n", z);

  }

}
