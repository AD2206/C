#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double x, y, result;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
        case  '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x* y;
            break;
        case '/':
            result = x/ y;
            break;
        default:
            printf(" Incorrect Operator Value\n");
            result = -DBL_MAX;
    }
    if(result!=-DBL_MAX)
        printf("%.2lf", result);

    return 0;
}
