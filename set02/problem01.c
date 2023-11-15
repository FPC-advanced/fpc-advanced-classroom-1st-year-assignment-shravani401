#include <stdio.h>

// Function declarations
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

int main() {
    float base, height, area;

    // Input function
    input(&base, &height);

    // Calculate area function
    find_area(base, height, &area);

    // Output function
    output(base, height, area);

    return 0;
}

void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

// Function to calculate the area of the triangle
void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

// Function to display the result
void output(float base, float height, float area) {
    printf("\nTriangle with base %.2f and height %.2f has an area of %.2f\n", base, height, area);
}
