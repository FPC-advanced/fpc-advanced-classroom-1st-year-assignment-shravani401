#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int len_str = strlen(string);
    int len_sub = strlen(substring);

    for (int i = 0; i <= len_str - len_sub; i++) {
        int j;
        for (j = 0; j < len_sub; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == len_sub) {
            return i; 
        }
    }

    return -1; 
}

void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("The index of '%s' in '%s' is %d\n", substring, string, index);
    } else {
        printf("Substring not found in the main string.\n");
    }
}

int main() {
    char main_string[100], substring[100];

    input_string(main_string, substring);

    int index = sub_str_index(main_string, substring);

    output(main_string, substring, index);

    return 0;
}
