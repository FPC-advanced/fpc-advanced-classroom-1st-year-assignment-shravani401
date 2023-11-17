#include <stdio.h>

// Function declarations
int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int number, result;

    // Input function
    number = input_number();

    // Check if the number is composite
    result = is_composite(number);

    // Output function
    output(number, result);

    return 0;
}
int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int is_composite(int n) {
    int factors = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors++;
        }
    }

    // A number is composite if it has more than 2 factors
    return (factors > 2);
}

void output(int n, int result) {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}
