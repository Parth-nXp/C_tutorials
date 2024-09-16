# include <stdio.h>

void print_string(char arr[]);
int main(){

    char firstname[] = "Parth";
    char lastname[] = "Sharma";
    print_string(firstname);
    print_string(lastname);
    return 0;
}


void print_string(char arr[]){
    for (int i =0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

}