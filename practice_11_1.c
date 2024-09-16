# include <stdio.h>

# include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5* sizeof(float));

    ptr[0] = 12.3;
    ptr[1] = 41.5;
    ptr[2] = 11.6;
    ptr[3] = 43.6;
    ptr[4] = 162.5;

    for (int i = 0; i < 5; i++){

        printf("%f\n", ptr[i]);
    }
    return 0;
}