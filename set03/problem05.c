#include <stdio.h>
#include <stdbool.h>

// Function to take input for n
int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

// Function to initialize the array from 2 to n
void init_array(int n, bool is_prime[]) {
    for (int i = 2; i <= n; i++) {
        is_prime[i] = true;
    }
}

// Function to apply the Sieve of Eratosthenes
void eratosthenes_sieve(int n, bool is_prime[]) {
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// Function to display output
void output(int n, bool is_prime[]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main() {
    // Input value of n
    int n = input_array_size();

    // Initialize an array to mark prime numbers
    bool is_prime[n + 1];
    init_array(n, is_prime);

    // Apply Sieve of Eratosthenes
    eratosthenes_sieve(n, is_prime);

    // Display output
    output(n, is_prime);

    return 0;
}
