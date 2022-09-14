#include <stdio.h>
void check(int x){
    int a=x;
    if (a%2==0)
    {
        printf("%d Number is Even!",a);
    }
    else{
        printf("%d Number is Odd!",a);
    }
}
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    check(a);
}