#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input();
Fraction findSmallest(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction smallest);

int main() {
    Fraction f1, f2, f3, smallest;

    // Input three fractions
    f1 = input();
    f2 = input();
    f3 = input();

    // Find the smallest fraction
    smallest = findSmallest(f1, f2, f3);

    // Output the result
    output(smallest);

    return 0;
}

Fraction input() {
    Fraction f;
    printf("Enter a fraction (numerator denominator): ");
    scanf("%d %d", &f.num, &f.den);
    return f;
}

Fraction findSmallest(Fraction f1, Fraction f2, Fraction f3) {
    if ((double)f1.num / f1.den <= (double)f2.num / f2.den && (double)f1.num / f1.den <= (double)f3.num / f3.den) {
        return f1;
    } else if ((double)f2.num / f2.den <= (double)f1.num / f1.den && (double)f2.num / f2.den <= (double)f3.num / f3.den) {
        return f2;
    } else {
        return f3;
    }
}

void output(Fraction smallest) {
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n",
           f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}
