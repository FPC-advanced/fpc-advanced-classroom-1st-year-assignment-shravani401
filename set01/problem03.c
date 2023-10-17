#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main() {
    int num1, num2, sum;
    
    num1 = input();
    num2 = input();
    
    sum = add(num1, num2);
    
    output(num1, num2, sum);
    
    return 0;
}

int input() {
    int num;
    scanf("%d", &num);
    return num;
}

int add(int a, int b) {
    return a + b;
}

void output(int a, int b, int sum) {
    printf("The sum of %d and %d is %d\n", a, b, sum);
}
