# include <stdio.h>

// check a number is divisible by 2 or not

int main(){

    int a;
    printf("write the number: ");
    scanf("%d", &a);
    printf("The number is divisible by 2: %d", a%2==0);

    return 0;
}