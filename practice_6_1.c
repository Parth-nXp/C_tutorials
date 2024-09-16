#include<stdio.h>
#include<math.h>




int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", i);
    printf("%d\n", *ptr);
    printf("%d\n", **pptr);
    return 0;
}

