#include<stdio.h>

int inputNumbers(int *a, int *b, int *c) {
    printf("Enter a number:");
    scanf("%d %d %d",a,b,c);
}

void findLargest(int *a, int *b, int *c) {
    if (*b > *a && *b > *c) {
        *a = *b;
    } else if (*c > *a && *c > *b) {
        *a = *c;
    }
}

void displayResult(int largest) {
    printf("The largest number is: %d\n",largest);
}

int main() {
    int a,b,c;
    inputNumbers(&a,&b,&c);
    findLargest(&a,&b,&c);
    displayResult(a);

    return 0;
    
}