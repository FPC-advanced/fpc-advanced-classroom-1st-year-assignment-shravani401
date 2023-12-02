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

// Function to input the number of sides
int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

// Function to input coordinates for a point
Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

// Function to input coordinates for a polygon
int input_polygon(Polygon *poly) {
    poly->sides = input_n();
    for (int i = 0; i < poly->sides; i++) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter the coordinates of point %d (x, y): ", i + 1);
        poly->p[i] = input_point(prompt_msg);
    }
    return poly->sides;
}

// Function to calculate the distance between two points
float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

// Function to calculate the perimeter of a polygon
void find_perimeter(Polygon *poly) {
    poly->perimeter = 0.0;
    for (int i = 0; i < poly->sides; i++) {
        poly->perimeter += find_distance(poly->p[i], poly->p[(i + 1) % poly->sides]);
    }
}

// Function to display output
void output(Polygon poly) {
    printf("The perimeter of the polygon is %.6f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;

    // Input coordinates for the polygon
    input_polygon(&myPolygon);

    // Calculate the perimeter of the polygon
    find_perimeter(&myPolygon);

    // Display output
    output(myPolygon);

    return 0;
}
