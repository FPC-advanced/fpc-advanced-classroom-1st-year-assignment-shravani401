#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main() {
    int n, r, result;

    // Input values for n and r
    input_n_and_r(&n, &r);

    // Calculate nCr
    result = nCr(n, r);

    // Output the result
    output(n, r, result);

    return 0;
}

void input_n_and_r(int *n, int *r) {
    printf("Enter the values for n and r: ");
    scanf("%d %d", n, r);
}

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

void output(int n, int r, int result) {
    printf("For n = %d and r = %d, nCr = %d\n", n, r, result);
}
