

> weight = pi * stomach_radius^3 * sqrt(height * length)

**Function Declarations**

c
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
*/
#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the radius of stomach:");
    scanf("f",radius);
    printf("Enter the height of camel:");
    scanf("f",height);
    printf("Enter the length of camel:");
    scanf("f",length);
}

float find_weight(float radius, float height, float length){
    float weight = PI * pow(radius, 3) * sqrt(height * length);
}

void output(float radius, float height, float length, float weight){
    printf("Stomach radius: %.2f\n",radius);
    printf("Height of Camel:%.2f\n",height);
    printf("Length of Camel:%.2f\n",length);
    printf("Weight of Camel:%.2f\n",weight);
}
int main(){
    float radius, height, length,weight;
    input_camel_details(&radius, &height, &length);
   weight= find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}