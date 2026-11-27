#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40) {
        if (marks >= 75)
            printf("Passed with distinction.\n");
        else
            printf("Passed.\n");
    } else {
        printf("Failed.\n");
    }
    return 0;
}