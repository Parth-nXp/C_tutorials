# include <stdio.h>


int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    int n = 0;
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);

    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);

    fclose(fptr);
    

    return 0;
}