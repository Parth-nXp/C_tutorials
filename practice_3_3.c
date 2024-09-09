# include <stdio.h>


int main(){

    int marks;
    printf("enter number (0-100): ");
    scanf("%d",&marks);

    if((marks >0) && (marks <30)){
        printf("Your grade is C \n");
    }
    else if((marks >= 30) && (marks < 70)){
        printf("Your grade is B \n");
    }
    else if((marks >= 70) && (marks < 90)){
        printf("Your grade is A \n");
    }
    else if((marks >= 90) && (marks <= 100)){
        printf("Your grade is A+ \n");
    }
    else{
        printf("Wrong Input!! \n");
    }
    return 0;
}