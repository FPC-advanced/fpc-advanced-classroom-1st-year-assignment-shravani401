#include <stdio.h>
#include <string.h>

// Function to take input string from the user
void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

// Function to reverse a string
void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j = 0;

    // Copy characters in reverse order
    for (i = length - 1; i >= 0; i--) {
        rev_str[j++] = str[i];
    }

    // Null-terminate the reversed string
    rev_str[j] = '\0';
}

// Function to display output
void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char input_str[100];
    char reversed_str[100];

    // Input string
    input_string(input_str);

    // Reverse the string
    str_reverse(input_str, reversed_str);

    // Display output
    output(input_str, reversed_str);

    return 0;
}
