# include <stdio.h>


int main(){

    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i = 1;
    int sum = 0;
    do{
        printf("%d \n", sum += i);
        i++;
    }while(i <= n);

    return 0;
}