#include <stdio.h>
int main() {
    int units;
    float charges;
    printf("Enter consumed units: ");
    scanf("%d", &units);
    if (units <= 100)
        charges = units * 1.50;
    else if (units <= 200)
        charges = 100 * 1.50 + (units - 100) * 2.00;
    else if (units <= 300)
        charges = 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00;
    else
        charges = 100 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 5.00;
    printf("Total Electricity Charges: %.2f\n", charges);
    return 0;
}