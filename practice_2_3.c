# include <stdio.h>

int main(){

    int is_sunday =1;
    int is_snowing = 1;
    printf("%d \n", is_sunday && is_snowing);


    int is_monday = 0;
    int is_raining = 0;
    printf("%d \n", is_monday || is_raining);

    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    printf("The number is greater than 9 or less than 100: %d", (x>9) && (x<100));

    return 0;
}