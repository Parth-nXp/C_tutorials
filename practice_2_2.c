# include <stdio.h>

// number is even or odd

int main(){
    int a;
    printf("write the number: ");
    scanf("%d", &a);
    printf("The number is even if 1 or odd if 0. So the number is : %d", a%2==0);

    return 0;

}