#include <stdio.h>

int main() {

printf("Name: Lourin F. Sarial\n");
printf("ID Number: 2025304333\n\n");
printf("---------------------------\n\n");

int num1, num2, total, valid;
char operator;

printf("Enter first number: ");
valid = scanf("%d", &num1);

printf("Enter an operator: ");
scanf(" %c", &operator);

printf("Enter second number: ");
valid = scanf("%d", &num2);

if (valid != 1) {
    printf("Invalid input! Please enter numeric values.\n");
} else if (operator == '+') {
    total = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, total);
} else if (operator == '-') {
    total = num1 - num2;
    printf("The difference of %d and %d is: %d\n", num1, num2, total);
} else if (operator == '*') {
    total = num1 * num2;
    printf("The product of %d and %d is: %d\n", num1, num2, total);
} else if (operator == '/') {
    total = num1/num2;
    printf("The quotient of %d and %d is: %d\n", num1, num2, total);
} else {
    printf("Invalid operator! Please use +, -, *, or /.\n");
}
return 0;
}