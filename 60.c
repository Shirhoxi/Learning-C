#include <stdio.h>
int main() {
    int rows = 5, cols = 5;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if((i + j) % 2 == 0)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
    return 0;
}