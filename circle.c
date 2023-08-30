#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    printf("Enter radius of Circle \n");
    scanf("%f", &a);
    b=3.14*a*a;
    printf("Area of circle is %f", b);

    return 0;
}
