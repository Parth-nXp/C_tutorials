# include <stdio.h>
# include <string.h>


void char_in_str(char str[], char ch);


int main(){
    char str[] = "parth sharma";
    char ch = 'm';
    char_in_str(str, ch);

    return 0;
}


void char_in_str(char str[], char ch){
    
    int i;
    for(i=0; str[i]!='\0'; i++){
        if (str[i] == ch){
            printf("Yes \n");
            return;
        }
    }
    printf("No \n");
}
