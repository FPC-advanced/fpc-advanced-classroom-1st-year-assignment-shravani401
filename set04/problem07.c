#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);

int main() {
    Fraction fraction1, fraction2, sum;

    // Input the first fraction
    fraction1 = input_fraction();

    // Input the second fraction
    fraction2 = input_fraction();

    // Add the fractions
    sum = add_fractions(fraction1, fraction2);

    // Output the result
    output(fraction1, fraction2, sum);

    return 0;
}

Fraction input_fraction() {
    Fraction f;
    printf("Enter a fraction (numerator denominator): ");
    scanf("%d %d", &f.num, &f.den);
    return f;
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

void output(Fraction f1, Fraction f2, Fraction sum) {
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}
