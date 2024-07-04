#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf("====================================\n");
    printf("          Simple Calculator         \n");
    printf("====================================\n");
    printf("Available operations:\n");
    printf("  + : Addition\n");
    printf("  - : Subtraction\n");
    printf("  * : Multiplication\n");
    printf("  / : Division\n");
    printf("====================================\n");
}

float calculate(float num1, float num2, char operator) {
    float result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                exit(1);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            exit(1);
    }
    return result;
}

int main() {
    float num1, num2, result;
    char operator;

    printMenu();

    // Input from user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform calculation
    result = calculate(num1, num2, operator);

    // Display result
    printf("====================================\n");
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    printf("====================================\n");

    return 0;
}
