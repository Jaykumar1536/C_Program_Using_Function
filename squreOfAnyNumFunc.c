#include <stdio.h>
void square(int x){
    int a=x;
    printf("%d Square is: %d",a,a*a);
}
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    square(a);
}