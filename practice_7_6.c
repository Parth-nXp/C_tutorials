# include <stdio.h>

int main(){
    int tables[2][10];
    for (int i=0; i<10; i++){
        tables[0][i]  = 2*(i+1);
    }
    for (int i=0; i<10; i++){
        tables[1][i]  = 3*(i+1);
    }

    for (int i=0; i<10; i++){
        printf("%d\t",tables[0][i]);
    }
    printf("\n");

    for (int i=0; i<10; i++){
        printf("%d\t",tables[1][i]);
    }
    return 0;
}