#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();
    for (int i = 0; i < poly->sides; i++) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter the coordinates of point %d (x, y): ", i + 1);
        poly->p[i] = input_point(prompt_msg);
    }
    return poly->sides;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon *poly) {
    poly->perimeter = 0.0;
    for (int i = 0; i < poly->sides; i++) {
        poly->perimeter += find_distance(poly->p[i], poly->p[(i + 1) % poly->sides]);
    }
}

void output(Polygon poly) {
    printf("The perimeter of the polygon is %.6f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;
    input_polygon(&myPolygon);
    find_perimeter(&myPolygon);
    output(myPolygon);

    return 0;
}
