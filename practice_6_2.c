#include<stdio.h>


void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int a = 5;
    int b = 7;
    swap(a, b);
    printf("%d, %d \n", a, b);
    _swap(&a, &b);
    printf("%d, %d \n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d, %d \n", a, b);
    return 0;
}

// call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}


// call by reference
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}