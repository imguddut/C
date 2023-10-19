#include<stdio.h>
int power(int,int);
int main(){
    int a, b, p;
    printf("Enter two number 1st is base @nd 2nd is Power \t");
    scanf("%d %d", &a , &b);
    p=power(a,b);
    printf("%d", p);
    return 0;

}

int power(int a, int b)
{
    if (b==0)
    return 1;
    if (b==1)
    return a;
    else
    return a*power(a,b-1);
    
}