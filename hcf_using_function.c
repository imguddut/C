#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call the function to calculate HCF
    int hcf = calculateHCF(a, b);

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}

// Function to calculate HCF
int calculateHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}