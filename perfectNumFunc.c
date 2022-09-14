#include <stdio.h>
void perfect(int x,int y){
    int a=x,b=y;
    int sum;
    printf("The perfect Nums between %d to %d are: ",a,b);
    for (int i = a; i <= b; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if(i%j==0){
                sum += j;
            }
        }
        if(sum==i){
            printf("%d, ",i);
        }
    }
}
void main(){
    int min,max;
    printf("lowest limit of perfect number is: ");
    scanf("%d",&min);
    printf("maximum limit of perfect number is: ");
    scanf("%d",&max);
    perfect(min,max);
}