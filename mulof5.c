#include<stdio.h>
int main()
{
    int i,n,mul;
    printf("The multiplication table of 5\n");
    printf("Enter till how much of 5 table should be printed too \n");
    scanf("%d",&n);
     printf("=======Table is======\n");
    for(i=1;i<=n;i++){
       
        mul=i*5;
        printf("%d times 5= %d\n",i,mul);


    }
}                       
