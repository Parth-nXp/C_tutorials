# include <stdio.h>

# include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    printf("talking about new memory");

    ptr = realloc(ptr,8);
    for (int i = 0; i < 8; i++){
        scanf("%d", &ptr[i]);
    }
    return 0;
}