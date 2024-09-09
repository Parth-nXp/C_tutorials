# include <stdio.h>


int main(){
    int a;
    printf("enter the number whose factorial you want to calculate: ");
    scanf("%d", &a);
    int fact = 1;
    for (int i = 1; i <= a; i++){
        fact *= i;
    }
    
    printf("%d \n", fact);

    return 0;
}
