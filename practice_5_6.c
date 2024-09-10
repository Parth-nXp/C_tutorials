#include<stdio.h>
#include<math.h>


int factorial(int x);

int main(){
    int x = 5;
    printf("%d", factorial(x));
    return 0;
}

int factorial(int x){
    if (x == 1){
        return 1;
    }
    int factN_prev = factorial(x-1);
    int factN = x * factN_prev;
    return factN;
}