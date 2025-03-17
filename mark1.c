#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator
    printf("Enter operator (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}
