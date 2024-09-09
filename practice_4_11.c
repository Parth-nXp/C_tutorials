# include <stdio.h>


int main(){
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    for (int i = 10; i >= 1; i-- ){
        printf("%d \n", i*a);
    }

    return 0;
}
