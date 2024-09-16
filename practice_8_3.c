# include <stdio.h>


int count_length(char arr_name[]);


int main(){

    char name[100];
    fgets(name, 100, stdin);

    printf("length is %d", count_length(name));

    return 0;
}

int count_length(char arr_name[]){
    int length = 0;

    for (int i = 1; arr_name[i] != '\0'; i++){
        length++;
    }

    return length;
}