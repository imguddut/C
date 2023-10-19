#include<stdio.h>
void sum(int , int);
int main()
{
    int a, b;
    printf("Enter two number \n");
    scanf("%d %d", &a, &b);
    sum(a,b);
}
void sum(int a, int b)
{
    int c;
    c=a+b;
    printf("Sum is %d ", c);
return c;
}