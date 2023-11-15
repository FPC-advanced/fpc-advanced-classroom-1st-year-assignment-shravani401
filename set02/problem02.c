#include <stdio.h>
int check_scalene(int x, int y, int z) {
    return (x != y && y != z && x != z);
}

// Function to display the result
void output(int x, int y, int z, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is scalene\n", x, y, z);
    } else {
        printf("The triangle with sides %d, %d, and %d is not scalene\n", x, y, z);
    }

    int main()  {
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


// Function to take input for a side of the triangle
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

}
