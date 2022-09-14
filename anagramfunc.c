#include <stdio.h>
#include <string.h>
void anagram(){
    char temp1,temp2;
    char a[] ="spare";
    char b[] = "pears";
    int n1 = strlen(a);
    int n2 = strlen(b);
    for(int l = 0; l < n1 ;l++){
        for (int m = l+1; m < n1; m++)
        {
            if (a[l]>a[m])
            {
                temp1 = a[l];
                a[l] = a[m];
                a[m] = temp1;
            }
        }
    }
    for(int l = 0; l < n2;l++){
        for (int m = l+1; m < n2; m++)
        {
            if (b[l]>b[m])
            {
                temp2 = b[l];
                b[l] = b[m];
                b[m] = temp2;
            }
        }
    }
    int c = strcmp(a,b);
    if (c == 0){
        printf("\nThis is a Anagram Words!");
    }else {
        printf("\nThis is a Not Anagram Words!");
    }
}
void main(){
    anagram();
}