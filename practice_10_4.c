# include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sum.txt", "r");
    int a;

    fscanf(fptr, "%d", &a);

    int b;

    fscanf(fptr, "%d", &b);


    fclose(fptr);

    int c = a + b;

    fptr = fopen("sum.txt", "w");


    fprintf(fptr, "%d", c);

    fclose(fptr);
    return 0;
}