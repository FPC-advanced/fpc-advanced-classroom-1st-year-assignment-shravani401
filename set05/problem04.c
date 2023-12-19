 #include <stdio.h>
int main() {
    float radius, height, length;
    input_camel_details(&radius, &height, &length);

    int mood = find_mood(radius, height, length);

    output(radius, height, length, mood);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);
    printf("Enter the height of the camel: ");
    scanf("%f", height);
    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 0;
    } else if (height < length && height < radius) {
        return 1;
    } else if (length < height && length < radius) {
        return 2;
    } else {
        return -1;
    }
}
void output(float radius, float height, float length, int mood) {
    printf("The Camel is ");
    switch (mood) {
        case 0:
            printf("Sick\n");
            break;
        case 1:
            printf("Happy\n");
            break;
        case 2:
            printf("Tense\n");
            break;
        default:
            printf("Undefined mood\n");
    }
}
