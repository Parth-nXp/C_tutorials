#include<stdio.h>
#include<math.h>


int sum_of_n(int x);

int main(){
    int x = 5;
    printf("%d", sum_of_n(x));
    return 0;
}

int sum_of_n(int x){
    if (x == 0){
        return 0;
    }
    return x + sum_of_n(x-1);
}