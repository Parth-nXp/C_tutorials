# include <stdio.h>

int main (){
    char first_name[50];
    char last_name[50];
    printf("enter your first name: ");
    scanf("%s", first_name);
    
    printf("enter your last name: ");
    scanf("%s", last_name);
    printf("your name is %s %s", first_name, last_name);

    return 0;
}