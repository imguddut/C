#include<stdio.h>
int hcf(int, int);
int main(){
    int a,b, rem=0;
    printf("Enter number for HCF:- ");
    scanf("%d %d", &a, &b);
    rem=hcf(a,b);
    printf("%d", rem);
    return 0;
    }
    int hcf(int a, int b)
    {
        int rem = a%b;
        if (rem == 0)
            return b;
        else
        return hcf(b, rem);
    }