#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[], float x);
void output(int n, float a[], float x, float result);

int main() {
    int n;
    float x, result;

    // Input the degree of the polynomial
    n = input_degree();

    // Array to store coefficients
    float a[n + 1];

    // Input coefficients and the value of x
    input_coefficients(n, a, &x);

    // Evaluate the polynomial using Horner's Method
    result = a[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }

    // Output the result
    output(n, a, x, result);

    return 0;
}

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[], float *x) {
    printf("Enter the coefficients of the polynomial: ");
    for (int i = 0; i <= n; i++) {
        scanf("%f", &a[i]);
    }

    printf("Enter the value of x: ");
    scanf("%f", x);
}

void output(int n, float a[], float x, float result) {
    printf("H(%d, %.2f, %.2f) = ", n, x, x);

    // Output the polynomial expression
    for (int i = 0; i <= n; i++) {
        printf("%.2f", a[i]);
        if (i < n) {
            printf(" + %.2f * %.2f^%d", a[i + 1], x, n - i - 1);
        }
    }

    printf(" = %.7f\n", result);
}
