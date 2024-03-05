// Write a function to find if a given number is a factorial number.
//1(0!) and (1!), 2(2!), 6(3!)

#include <stdio.h>
int input_number() {
  int n;
  printf("Enter a number:");
  scanf("%d",n);
  return n;
}
int is_factorial (int n) {
int fact =1;
  for( int i=1; i<= n ;i++) {
    fact *= i;
}
if (fact == n) {
    return 1;
    
}
else return 0;
}
void output (int n ,int result){
  if (result ==1) {
    printf()
  }

}


