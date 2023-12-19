#include <stdio.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main() {
    int x = input(x);
    float result = borga_X(x);
    output(x, result);

    return 0;
}

int input(int x) {
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

float borga_X(int x) {
    float result = 1.0;
    float term = 1.0;

    for (int i = 1; term >= 0.000001; i++) {
        term *= (float)x / (2 * i * (2 * i + 1));
        result += term;
    }

    return result;
}

void output(int x, float result) {
    printf("borga(%d) = %f\n", x, result);
}
