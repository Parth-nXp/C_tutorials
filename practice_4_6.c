# include <stdio.h>


int main(){
    int a;
    while(1){
        scanf("%d", &a);
        if (a%2 == 1){
            break;
        }
    }
    printf("You entered a odd number");

    return 0;
}
