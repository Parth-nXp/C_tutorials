# include <stdio.h>


int main(){

    int marks;
    printf("enter number (0-100): ");
    scanf("%d",&marks);

    marks > 30 ? printf("You are Pass!!") : printf("You are Fail!!");
    return 0;
}