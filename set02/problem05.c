#include <stdio.h>

int main() {
    int num1, num2, gcd;
    
    num1 = input();
    num2 = input();
    
    gcd = find_gcd(num1, num2);
    
    output(num1, num2, gcd);

    return 0;
}

// Function to input a number
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to find the GCD of two numbers
int find_gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

// Function to output the result
void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}
