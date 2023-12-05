#include <stdio.h>

int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, next;
        for (int i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        return next;
    }
}

void output(int n, int fibo) {
    printf("fibo(%d) = %d\n", n, fibo);
}

int main() {
    // Input value of n
    int n = input();

    // Find the nth Fibonacci number
    int fibo = find_fibo(n);

    // Display output
    output(n, fibo);

    return 0;
}
