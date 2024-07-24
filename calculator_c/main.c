#include <stdio.h>

/*Definition of arithmetic operations*/

/*Addition*/
void addition() {
  int a, b;
  printf("Enter the augend: ");
  scanf("%d", &a);
  printf("Enter the addend: ");
  scanf("%d", &b);
  printf("The sum is %d", a + b);
}

/*Subtraction*/
void subtraction() {
  int a, b;
  printf("Enter the minuend: ");
  scanf("%d", &a);
  printf("Enter the subtrahend: ");
  scanf("%d", &b);
  printf("The difference is %d", a - b);
}

/*Multiplication*/
void multiplication() {
  int a, b;
  printf("Enter the multiplicand: ");
  scanf("%d", &a);
  printf("Enter the multiplier: ");
  scanf("%d", &b);
  printf("The product is %d", a * b);
}

/*Division*/
void division() {
  int a, b;
  printf("Enter the dividend: ");
  scanf("%d", &a);
  printf("Enter the divisor: ");
  scanf("%d", &b);
  if (b == 0) {
    printf("Division by zero is not allowed");
  } else {
    printf("The quotient is %d", a / b);
  }
}

/*Calculator code*/

int main() {
  int op;
  printf("1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division\nEnter the operation you want to perform: ");
  scanf("%d", &op);
  switch (op) {
  case 1:
    addition();
    break;

  case 2:
    subtraction();
    break;

  case 3:
    multiplication();
    break;

  case 4:
    division();
    break;

  default:
    printf("Invalid choice");
  }
  return 0;
}