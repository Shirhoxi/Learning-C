#include <stdio.h>

int main()
{
    int a;
    char stu; // Holds a single letter like 'y' or 'n'

    printf("Enter the age of the person:\n");
    scanf("%d", &a);

    // Ask for a single character (y/n) instead of a full word
    printf("Enter 'y' if the person is a student or 'n' if not:\n");
    // Notice the space before %c -> it cleans up hidden spaces in the terminal
    scanf(" %c", &stu); 

    // FIXED: Changed to == and used single quotes for single characters
    if (a >= 65 || stu == 'y' || stu == 'Y') {
        printf("The person qualifies for the discounting process\n");
    }
    else {
        printf("The person doesn't qualify for any discounting process\n");
    }

    return 0;
}
