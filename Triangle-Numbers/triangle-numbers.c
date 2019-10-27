/*
Triangle-Numbers on C

git-repository: https://github.com/360macky/seqCodes
author: Marcelo A.S.
email: <mail.marcelo.as@gmail.com>
*/

#include <stdio.h>

int main(){

  printf("+-+-+-+-+-+-+-+-+\n");
  printf("|T|R|I|A|N|G|L|E|\n");
  printf("+-+-+-+-+-+-+-+-+\n");

  int n;

  // Message
  printf("Input the term based in the Triangle-Numbers Sequence\n");
  scanf("%d", &n);

  printf("+-+-+-+-+-+-+-+-+\n");

  // Loop to generate the sequence
  for (int i = 1; i < n; i++) {

    // Apply the formula
    int triangle_number = (i * (i + 1)) / 2;

    // Show each number
    printf("%i\n", triangle_number);

  }

}
