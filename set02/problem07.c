#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle() {
    Triangle p;
    printf("Enter the base of the triangle: ");
    scanf("%f", &p.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &p.altitude);
    return p;
}

void find_area(Triangle *p) {
    p->area = 0.5 * (p->base) * (p->altitude);
}

void output(Triangle p) {
    printf("The area of the triangle with base = %.f and altitude = %.f is %.f\n", p.base, p.altitude, p.area);
}

int main() {
    Triangle myTriangle = input_triangle();

    // Calculate area
    find_area(&myTriangle);

    // Display output
    output(myTriangle);

    return 0;
}
