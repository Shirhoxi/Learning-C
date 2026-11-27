//program to check someones eligibility for elder citizen discount or student discount process
#include<stdio.h>
int main()
{
    int a;
    char n;
    printf("Enter the age of the person;\n");
    scanf("%d",&a);
    printf("Enter Y if the person is student or No if the person is not a student\n");
    scanf(" %s",&n);

    if(a>=65||n=='y'||n=='Y'){
        printf("The person qualifies for the discounting process\n");

    }
    else{
        printf("The person doesn't qualify for any discounting process\n");
    }
    return 0;
}