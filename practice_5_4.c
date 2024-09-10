#include<stdio.h>
#include<math.h>


float area_of_square(float side);
float area_of_rectangle(float length, float width);
float area_of_circle(float radius);

int main(){
    char shape;
    printf("enter whose are you want to find: ");
    scanf("%c", &shape);

    if (shape =='s'){
        float side;
        printf("enter value of side: ");
        scanf("%f", &side);
        float area = area_of_square(side);

        printf("Area of the shape is %f", area);
    }

    else if (shape =='r'){
            float length, width;
            printf("enter value of length: ");
            scanf("%f", &length);
            printf("enter value of length: ");
            scanf("%f", &width);

            float area = area_of_rectangle(length, width);

            printf("Area of the shape is %f", area);
    }

    else if (shape =='c'){
            float radius;
            printf("enter value of radius: ");
            scanf("%f", &radius);
            float area = area_of_circle(radius);

            printf("Area of the shape is %f", area);
    }

    else {

        printf("wrong input");
    }
    
    return 0;
}

float area_of_square(float side){
    return pow(side, 2);
}

float area_of_rectangle(float length, float width){
    return length * width;
}

float area_of_circle(float radius){
    return 3.14 * pow(radius, 2);
}