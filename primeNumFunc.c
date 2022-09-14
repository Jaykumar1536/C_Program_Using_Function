#include <stdio.h>
void prime(int x){
    int a=x,b=0;
    for (int i = 1; i <= a; i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if (b==2)
    {
       printf("%d is Prime Number!",a);
    }else {
        printf("%d is Not Prime Number!",a);
    }
}
void main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    prime(a);
}