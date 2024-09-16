# include <stdio.h>

typedef struct bank_account{
    char name[256];
    int account_no;

}acc;


int main(){
    acc person_1 = {"Parth", 000000};
    acc person_2 = {"Akshay", 111111};

    return 0;
}