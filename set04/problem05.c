#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main() {
    int n, index;

    // Input the size of the array
    n = input_size();

    // Array to store elements
    int a[n];

    // Input array elements
    input_array(n, a);

    // Find the index of the largest number
    index = find_largest_index(n, a);

    // Output the result
    output(index);

    return 0;
}

int input_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void output(int index) {
    printf("The index of the largest number in the array is %d\n", index);
}
