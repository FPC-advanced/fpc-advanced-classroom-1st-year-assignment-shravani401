#include<stdio.h>

int input() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    return num;
}
int compare(int num1, int num2, int num3) {
    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    return largest;
}

void displayResult(int largest) {
    printf("The largest number is:%d\n",largest);
}
int main() {
    int num1, num2, num3, largest;
    num1 = input();
    num2 = input();
    num3 = input();
    largest = findLargest(num1,num2,num3);
    displayResult(largest);
 return 0;
}
