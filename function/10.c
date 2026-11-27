//factorial wala question
#include<stdio.h>
int fact(int n){
    if(n==0)
    return 1;//base condition
    else 
    return n * fact(n-1);//recursive call
}
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("factorial=%d",fact(num));
    return 0;
}