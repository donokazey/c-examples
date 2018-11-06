#include <stdio.h>

int sum(int num1, int num2);

int main(){
  int number1;
  int number2;

  number1 = 4;
  number2 = 7;

  int result = sum(number1, number2);

  printf("%i + %i = %i\n", number1, number2, result);

  return 0;
}

int sum(int a, int b){
  return (a + b);
}

