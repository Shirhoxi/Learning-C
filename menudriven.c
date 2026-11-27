#include<stdio.h>
int main()
{
    int choice;
    do{
        printf("Enter choice:\n");
        scanf("%d",&choice);
        if(choice==1)
            printf("Hello world\n");
    } 
    while(choice==2);
return 0;
    


}