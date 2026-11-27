#include <stdio.h>
int main() {
    int i;
    float f;
    char c;
    double d;
    printf("Enter an integer, float, character, and double:\n");
    scanf("%d %f %c %lf", &i, &f, &c, &d);
    printf("Integer: %d\nFloat: %f\nCharacter: %c\nDouble: %lf\n", i, f, c, d);
    return 0;
}