//argument with return type 
#include<stdio.h>
int square(int n){
    return n*n;


}
int main()
{
    int s;
    s=square(4);//function call
    printf("%d",s);
    return 0;
}