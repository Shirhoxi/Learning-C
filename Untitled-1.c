#include<stdio.h>
int add(int,int);
int main()

{
    int result;
    result=add(10,20);
    printf("result=%d",result);
    return 0;
}
int add(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}