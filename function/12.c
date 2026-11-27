//fionacci series using recursion
#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;//base condition
    if(n==1)
    return 1;//base conditoon
    return fib(n-1)+fib(n-2);//recursive call 
}
int main()
{
    int n=6;
    printf("fibonacci=%d",fib(n));
    return 0;
}