#include<stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter any number for factorial:-  ");
    scanf("%d", &n);
   f= fact(n);
    printf("Factorial is %d \n", f);

}

int fact(int n)
{
    int i, f=1;
    for ( i = 1; i <= n; i++)
    {
          f=f*i;

              }
    return f;
}