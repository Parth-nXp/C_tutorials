# include <stdio.h>


int main(){

    float price[3];

    printf("enter price of first product: ");
    scanf("%f",&price[0]);
    
    printf("enter price of second product: ");
    scanf("%f",&price[1]);
    
    printf("enter price of third product: ");
    scanf("%f",&price[2]);

    printf("final cost with gst for first product: %f, second product: %f, third product: %f", price[0]*1.18, price[1]*1.18, price[2]*1.18);
    return 0;
}