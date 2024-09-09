# include <stdio.h>


int main(){

    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);

    if (marks >30){
        printf("You are Pass!");
    }
    else {
        printf("You are Fail!!");
    }
    return 0;
}