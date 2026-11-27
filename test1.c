#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum,diff;
    float pro,rem,q;
    printf("enter two numbers to find the sum, difference, product, quotient and remainder\n");
    scanf("%d %d",&a,&b);
    sum = a + b;
    diff = a - b;
    pro = a * b;

    q = a / b;
    printf("sum=%d\n", sum);
    printf("difference=%d\n", diff);
    printf("product=%f\n", pro);

    printf("quotient=%f\n", q);

return 0;
}