#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

// Function to take input for a triangle
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);
    return t;
}

// Function to calculate the area of a triangle
void find_area(Triangle *t) {
    t->area = 0.5 * (t->base) * (t->altitude);
}

// Function to display output
void output(Triangle t) {
    printf("The area of the triangle with base = %.6f and altitude = %.6f is %.6f\n", t.base, t.altitude, t.area);
}

int main() {
    // Input triangle
    Triangle myTriangle = input_triangle();

    // Calculate area
    find_area(&myTriangle);

    // Display output
    output(myTriangle);

    return 0;
}
