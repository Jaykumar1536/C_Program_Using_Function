#include <stdio.h>
void min_max(int x){
    int a=x;
    int b[20];
    int min,max;
    printf("input %d number of values",a);
    for(int i = 0; i < a; i++)
    {
        printf("\nEnter value %d: ",i);
        scanf("%d",&b[i]);
    }
    min = b[0];
    max = b[0];
    for (int j = 0; j < a; j++)
    {
         if(b[0]>b[j])
        {
            min = b[j];
        }
    }
    for (int k = 0; k < a; k++)
    {
        if(b[0]<b[k])
        {
            max =b[k];
        }
    }
    printf("\n%d is Minimum Value!",min);
    printf("\n%d is Maximum Value!",max);
}
void main(){
    min_max(5);
}