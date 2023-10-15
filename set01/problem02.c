//2. Write a C program to add two numb
#include<stdio.h>
int main() {

    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);

    result = a + b;
    printf("The sum of %d + %d is %d\n", a,b, result);

    return 0;
}