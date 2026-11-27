    #include <stdio.h>
int main() {
    int sum = 0, num;
    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        sum += num;
    } while(num != 0);
    printf("Total Sum = %d\n", sum);
    return 0;
}