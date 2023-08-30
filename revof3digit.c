//rev of 3 digit number//

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, a, b, c, rev;

    printf("Enter 3 digit no.");

    scanf("%d", &n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    rev= a*100+b*10+c;

    printf("rev= %d \n", rev);



    return 0;

    
}
