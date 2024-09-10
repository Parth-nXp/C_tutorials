#include<stdio.h>


int fibonacci(int n_term);

int main(){
    int n_term = 6;
    printf("%d", fibonacci(n_term));
    return 0;
}

int fibonacci(int n_term){
    if (n_term == 0 || n_term ==1){
        if (n_term ==0){
            return 0;
        }
        else{
            return 1;
        }
    }

    int fib_n = fibonacci(n_term-1) + fibonacci(n_term-2);
    return fib_n;

}