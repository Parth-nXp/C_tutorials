#include<stdio.h>
#include<math.h>


float square(float x);

int main(){
    float num;
    printf("enter number whose square you want to find: ");
    scanf("%f", &num);
    float square_of_num = square(num);
    printf("square of the number is %f", square_of_num);
    return 0;
}

float square(float x){
    return pow(x, 2);

}