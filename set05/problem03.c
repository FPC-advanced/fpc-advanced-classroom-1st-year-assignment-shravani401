#include<stdio.h>
#include<math.h>
#define PI 3.14
struct camel{
    float radius ,height, length, weight;
};
typedef struct camel Camel;
Camel input(){
    Camel c;
    printf("Enter the stomach radius:");
    scanf("%f",&c.radius);
    printf("Enter the height of camel:");
    scanf("%f",&c.height);
    printf("Enter the length of Camel:");
    scanf("%f",&c.length);
    return c;
}
 float find_weight(Camel c){
  return PI * pow(c.radius 3) * sqrt(c.height*c.length);
 }

 
 void find_weight(Camel *c){
    c->weight= PI * pow(c->radius 3)* sqrt(c->height*c->length);

 }
 void output(Camel c){
 printf("Radius of stomach is %.2f:",c.radius);
 printf("Height of camel is %.2f",c.height);
 printf("Length of camel is %.2f",c.length);
 printf("Weight of camel is %.2f",c.weight)
 }
 int main(){
Camel mcamel;
mcamel=input();
weight=find_weight(mcamel);
output(mcamel);
return 0;
 }