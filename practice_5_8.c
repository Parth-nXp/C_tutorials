#include<stdio.h>
#include<math.h>


float per_of_marks(float maths_marks, float sanskrit_marks, float science_marks);

int main(){
    float maths_marks = 97.0;
    float science_marks = 84.0;
    float sanskrit_marks = 45.0;
    printf("%f", per_of_marks(maths_marks, sanskrit_marks, science_marks));
    return 0;
}

float per_of_marks(float maths_marks, float sanskrit_marks, float science_marks){

    return (maths_marks + sanskrit_marks + science_marks)/300 * 100;
}