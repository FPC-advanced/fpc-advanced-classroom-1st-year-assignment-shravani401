#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main() {
    int num1, den1, num2, den2, res_num, res_den;

    // Input two fractions
    input(&num1, &den1, &num2, &den2);

    // Add the fractions
    add(num1, den1, num2, den2, &res_num, &res_den);

    // Output the result
    output(num1, den1, num2, den2, res_num, res_den);

    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2) {
    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", num1, den1);

    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", num2, den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2 + num2 * den1;
    *res_den = den1 * den2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    printf("%d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}
