# include <stdio.h>

void slice(char str[], int n, int m);

int main(){
    char str[] = "HelloWorld";
    int n = 3;
    int m = 6;

    slice(str, n, m);
    return 0;
}


void slice(char str[], int n, int m){
    char sliced_str[200];
    int i,j;
    int ch;
    for (i=n, j=0; i<=m; i++, j++){
        sliced_str[j] = str[i];
    }
    sliced_str[j] = '\0';
    puts(sliced_str);
}