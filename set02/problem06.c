#include <stdio.h>
#include <string.h>

void input_string(char *c) {
    printf("Enter a string: ");
    scanf("%s", c);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j = 0;

    for (i = length - 1; i >= 0; i--) {
        rev_str[j++] = str[i];
    }

    rev_str[j] = '\0';
}

void output(char *c, char *reverse_c) {
    printf("Original string: %s\n", c);
    printf("Reversed string: %s\n", reverse_c);
}

int main() {
    char input_str[100];
    char reversed_str[100];

    input_string(input_str);

    str_reverse(input_str, reversed_str);

    output(input_str, reversed_str);

    return 0;
}
