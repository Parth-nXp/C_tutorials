#include<stdio.h>

void get_values(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, product, avg ;
    get_values(a, b, &sum, &product, &avg);
    printf("Sum: %d, Product: %d, Average: %d", sum, product, avg);
    return 0;
}


void get_values(int a, int b, int *sum, int *product, int *avg){
    *sum = a + b;
    *product = a * b;
    *avg = (a+b)/2;
}

