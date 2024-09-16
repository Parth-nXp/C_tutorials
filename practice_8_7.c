# include <stdio.h>
# include <string.h>


void vowel_count(char str[]);


int main(){
    char str[] = "Parth Sharma";
    vowel_count(str);

    return 0;
}


void vowel_count(char str[]){
    int i ;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    printf("%d\n", count);
}
