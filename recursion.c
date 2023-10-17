#include<stdio.h>
// Function declaration
int myfunction(int, int);
int n, t;
// The main method
int main() {
    printf("Table of  ");
    scanf("%d", &n);
  for (int i = 1; i <= 10; i++)
  {
    t=myfunction(n,i);
    printf("%d X %d = %d \n", n, i, t);
  }
  return 0;
}

// Function definition
int myfunction(int n, int i) {
  int t;
  t=n*i;
  return t;
}