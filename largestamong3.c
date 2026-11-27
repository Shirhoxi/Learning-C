#include<stdio.h>
int main(){
    printf("enter 3 numbers:");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is the largest among three given numbers\n",a);
    }
    if(b>a&&b>c){
        printf("%d is the largest among three given numbers\n",b);
    }
    else{
        printf("%d is the largest among three given numbers\n",c);
    }
    return 0;
}