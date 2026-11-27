#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double num;
    printf("1. Square\n2. Cube\n3. Square root\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%lf", &num);
    switch(choice) {
        case 1:
            printf("Square = %.2lf\n", num * num);
            break;
        case 2:
            printf("Cube = %.2lf\n", num * num * num);
            break;
        case 3:
            if(num >= 0)
                printf("Square root = %.2lf\n", sqrt(num));
            else
                printf("Error! Negative number for square root.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}