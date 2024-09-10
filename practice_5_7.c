#include<stdio.h>
#include<math.h>


float cel_to_far(float cel_temp);

int main(){
    float cel_temp = 37.0;
    printf("%f", cel_to_far(cel_temp));
    return 0;
}

float cel_to_far(float cel_temp){

    return cel_temp * (9.0/5.0) + 32;
}