#include <stdio.h>

int main(){
  int num;

  printf("Enter your first character\n");

  num = getchar();

  printf("Your first character is ");
  putchar(num);
  printf("\n");

  return 0;
}

