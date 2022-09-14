#include <stdio.h>
void swap(int x,int y) {
    int a=x,b=y,temp;
    printf("\nBefore Swapping Number:n1= %d, n2= %d",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("\nAfter Swapping Number:n1= %d, n2= %d",a,b);    
}
void main(){
    int a,b;
    printf("Enter a n1: ");
    scanf("%d",&a);
    printf("Enter a n2: ");
    scanf("%d",&a);
    swap(a,b);
}