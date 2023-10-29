# include<stdio.h>
int main() {
int n = input_array_size();
int a[n];
input_array(n,a);
int sum = sum_n_array(n,a);
output(sum);
return 0;
}
int input_array_size() {
int n;
printf("Input array size:");
 scanf("%d",&n);
 return n;
}

void input_array(int n,int a[n]){
printf("Input the arry:");
for(int i =0; i<n;i++){
    scanf("%d",&a[i]);
   }
} 
  
int sum_n_array(int n,int a[n]) {
    int sum = 0;
for(int i =0; i<n;i++) {
    sum += a[i];
}
    return sum;
}

void output(int sum) {
printf("The sum of array element is %d",sum);
}