#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main() {
    char inputString[100];
    int numberOfWords;

    // Input the string
    input_string(inputString);

    // Count the number of words
    numberOfWords = count_words(inputString);

    // Output the result
    output(inputString, numberOfWords);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);
}

int count_words(char *string) {
    char *token;
    int count = 0;


    token = strtok(string, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}
