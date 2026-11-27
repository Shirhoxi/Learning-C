#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    switch(choice) {
        case 1: printf("Sum = %d\n", a + b); break;
        case 2: printf("Difference = %d\n", a - b); break;
        case 3: printf("Product = %d\n", a * b); break;
        case 4: 
            if(b != 0) printf("Quotient = %.2f\n", (float)a / b);
            else printf("Division by zero error!\n");
            break;
        case 5:
            if(b != 0) printf("Remainder = %d\n", a % b);
            else printf("Modulo by zero error!\n");
            break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}