#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter coordinates for a point (x y): ");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates for the first point (x1 y1):\n");
    l.p1 = input_point();
    printf("Enter coordinates for the second point (x2 y2):\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    l->distance = sqrt(pow(l->p2.x - l->p1.x, 2) + pow(l->p2.y - l->p1.y, 2));
}

void output(Line l) {
    printf("The distance between the points (%.6f,%.6f) and (%.6f,%.6f) is %.4f\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main() {
    // Input coordinates for a line
    Line myLine = input_line();

    // Calculate the length of the line
    find_length(&myLine);

    // Display output
    output(myLine);

    return 0;
}
