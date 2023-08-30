#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, a, b, c, d, e, f, g, h, i, j;
printf("Enter Amount:- \t");
scanf("%d", &n);

a=n/2000;
printf("No. of 2000 notes =%d\n", a);

b=(n-a*2000)/500;
printf("No. of 500 notes =%d\n", b);

c = (n - a*2000 - b*500)/200;
printf("No. of 200 notes =%d\n" , c);

d = (n - a*2000 - b*500 - c*200)/100;
printf("No. of 100 notes = %d\n", d);

e = (n - a*2000 - b*500 - c*200 - d*100)/50;
printf("No. of 50 notes = %d\n", e);

f = (n - a*2000 - b*500 - c*200 - d*100 - e*50)/20;
printf("No. of 20 notes = %d\n", f);

g = (n - a*2000 - b*500 - c*200 - d*100 - e*50 - f*20)/10;
printf("No. of 10 notes = %d\n", g);

h = (n - a*2000 - b*500 - c*200 - d*100 - e*50 - f*20 - g*10)/5;
printf("No. of 5 rupee coin = %d\n", h);

i = (n - a*2000 - b*500 - c*200 - d*100 - e*50 - f*20 - g*10 - h*5)/2;
printf("No. of 2 rupee coin =%d\n", i);

j = (n - a*2000 - b*500 - c*200 - d*100 - e*50 - f*20 - g*10 - h*5 - i*2)/1;
printf("No. of 1 rupee coin =%d\n", j);


    return 0;
}