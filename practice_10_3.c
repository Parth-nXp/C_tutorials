# include <stdio.h>


int main(){
    FILE *fptr;
    fptr = fopen("odd_numbers.txt", "w");
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i <= n; i++){
        if(i%2 != 0){
            fprintf(fptr, "%d \t", i);
        }
    }

    fclose(fptr);
    return 0;
}