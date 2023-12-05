#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates for the first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates for the second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("The distance between point (%.7f, %.7f) and (%.7f, %.7f) is %.4f\n", x1, y1, x2, y2, distance);
}

int main() {
    float x1, y1, x2, y2;

    // Input coordinates for two points
    input(&x1, &y1, &x2, &y2);

    // Find the distance between two points
    float distance = find_distance(x1, y1, x2, y2);

    // Display output
    output(x1, y1, x2, y2, distance);

    return 0;
}
