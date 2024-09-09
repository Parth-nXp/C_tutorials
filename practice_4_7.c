# include <stdio.h>


int main(){
    int a;
    do{
        scanf("%d", &a);
        if (a%7 == 0){
            break;
        }
    }while(1);
    printf("You entered a multiple of seven");

    return 0;
}
