#include <stdio.h>

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_prime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

void output(int n, int result) {
    if (result) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
}

int main() {
    // Input number
    int num = input_number();

    // Check if the number is prime
    int result = is_prime(num);

    // Display output
    output(num, result);

    return 0;
}
