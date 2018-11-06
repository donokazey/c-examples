#include <stdio.h>

int main(){
  char string[10];

  printf("Type some strings\n");

  // ** if you enter more than 10 char, it will ***stack smashing detected***
  gets(string);

  printf("\nYou entered ");
  puts(string);

  return 0;
}

