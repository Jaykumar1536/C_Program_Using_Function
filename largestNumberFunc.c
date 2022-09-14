#include <stdio.h>
void largest(int x)
{
    int b=x;
    int a[10];
    for (int k = 0; k < b; k++)
    {
        printf("Element of %d :",k);
        scanf("%d",&a[k]);
    }
    
    for (int i = 0; i < b; i++)
    {
        if (a[0] < a[i])
        {
            a[0]=a[i];
        }
    }
    printf("Maximal number of elements is: %d", a[0]);
}
void main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    largest(a);
}