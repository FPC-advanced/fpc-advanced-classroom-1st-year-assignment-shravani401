#include <stdio.h>

// Function declarations
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int side1, side2, side3, isscalene;

    // Input function for three sides
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    // Check if the triangle is scalene
    isscalene = check_scalene(side1, side2, side3);

    // Output function
    output(side1, side2, side3, isscalene);

    return 0;
}
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    return (a != b && b != c && a != c);
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is scalene\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d, and %d is not scalene\n", a, b, c);
    }
}
