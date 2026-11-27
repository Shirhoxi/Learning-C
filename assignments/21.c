#include <stdio.h>
int main() {
    char op;
    double a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if(b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct\n");
    }
    return 0;
}