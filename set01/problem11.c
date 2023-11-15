#include<stdio.h>
struct _complex{
    float real;
    float imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
    Complex a;
    printf("Enter the real and imaginary part:");
    scanf("%f %f", &a.real, &a.imaginary);
    return a;

}
Complex add_complex(Complex a, Complex b)
{

Complex sum;
sum.real=a.real+b.real;
sum.imaginary=a.imaginary+b.imaginary;
return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %f+%fi and %f+fi is %f+%fi", a.real, a.imaginary, b.real, b.imaginary, sum.real,sum.imaginary );

}
int main(){
Complex a,b,sum;
a=input_complex();
b=input_complex();
sum=add_complex(a,b);
output(a,b,sum);
return 0;
}