#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float num, result;
    num = input();
    result = square_root(num);
    output(num, result);
    return 0;
}

float input() {
    float n;
    printf("Enter number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
return sqrt(n);
}

void output(float n, float sqrroot) {
printf("The square root of %.2f is %.2f\n", n, sqrroot);
}
