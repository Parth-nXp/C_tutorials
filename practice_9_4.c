# include <stdio.h>
# include <string.h>

typedef struct complex_number{
    int real_value;
    int imag_value;
}com;


int main(){
    com c1;
    struct complex_number *ptr = &c1;

    ptr->real_value = 3;
    ptr->imag_value = 2;

    printf("complex_number is %d+%di \n", ptr->real_value, ptr->imag_value);
    return 0;
}