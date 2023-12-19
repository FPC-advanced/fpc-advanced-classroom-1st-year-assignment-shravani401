#include <stdio.h>

void getFactorialNumbers(int input[], int size, int output[]) {
  for (int i = 0; i < size; i++) {
    int num = input[i];
    int fact = 1;
    
    for (int j = 1; j <= num; j++) {
      fact *= j;
    }
    
    output[i] = fact;
  }
}

int main() {
  int input[] = {5, 3, 7, 4};
  int size = sizeof(input) / sizeof(input[0]);
  int output[size];
  
  getFactorialNumbers(input, size, output);
  
  printf("Factorial numbers in the array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", output[i]);
  }
  
  printf("\n");
  
  return 0;
}

