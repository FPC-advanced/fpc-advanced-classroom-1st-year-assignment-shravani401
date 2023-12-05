#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main() {
    int n;
    Fraction sum;

    // Input the number of fractions
    n = input_n();

    // Array to store fractions
    Fraction fractions[n];

    // Input n fractions
    input_n_fractions(n, fractions);

    // Add n fractions
    sum = add_n_fractions(n, fractions);

    // Output the result
    output(n, fractions, sum);

    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction() {
    Fraction f;
    printf("Enter a fraction (numerator denominator): ");
    scanf("%d %d", &f.num, &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n]) {
    for (int i = 0; i < n; i++) {
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return find_gcd(b, a % b);
    }
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = (f1.num * f2.den) + (f2.num * f1.den);
    result.den = f1.den * f2.den;

    // Simplify the result by dividing numerator and denominator by their GCD
    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;

    return result;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
    Fraction sum = f[0];
    for (int i = 1; i < n; i++) {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum) {
    printf("Sum of ");
    for (int i = 0; i < n; i++) {
        printf("%d/%d", f[i].num, f[i].den);
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf(" = %d/%d\n", sum.num, sum.den);
}
