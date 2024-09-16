# include <stdio.h>
# include <string.h>

void pw_salt(char old_pw[]);

int main(){
    char old_pw[100];
    scanf("%s",&old_pw);
    pw_salt(old_pw);
    return 0;
}

void pw_salt(char old_pw[]){
    char salt[] = "123";
    char new_pw[200];

    strcpy(new_pw, old_pw);
    strcat(new_pw, salt);
    puts(new_pw);
}
