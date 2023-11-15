struct _complex {
	float real;
    float imaginary;
};
typedef struct _complex Complex;
int get_n() {
    int n;
    printf("Enter the size of complex:");
    scanf("%d",&n);
    return n;
}

void input_n_complex(int n,Complex p[n]) {
    printf("Enter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) {
     printf("\nEnter the real and imaginary part of %d complex number:",i+1);
    scanf("%f %f", &p[i].real,&p[i].imaginary);
    }
}
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex p[n]) {
    Complex sum;
    sum.real = 0;
    sum.imaginary = 0;
    
    for (int i = 0; i < n; i++) {
        sum.real += p[i].real;
        sum.imaginary += p[i].imaginary;
    }
    return sum;
}
void output(int n, Complex p[n], Complex result) {
    printf("The sum of %d of complex number is %f + %fi\n",n,result.real, result.imaginary);
}
int main() {
    int n = get_n();
    Complex p[n],a,b;
    input_n_complex(n,p);
    add(a,b);
    Complex result = add_n_complex(n,p);
    output(n,p,result);
    
    return 0;
}