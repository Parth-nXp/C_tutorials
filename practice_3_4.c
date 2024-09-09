# include <stdio.h>


int main(){

    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("Character is upper case. \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Character is lower case. \n");
    }
    else {
        printf("not english character.");
    }

    return 0;
}