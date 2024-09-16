# include <stdio.h>

struct vector{
    int i_cap;
    int j_cap;
};

void sum_vector(struct vector vec_1, struct vector vec_2);

int main(){
    struct vector vect[2];
    vect[0].i_cap = 2;
    vect[0].j_cap = 5;

    vect[1].i_cap = 7;
    vect[1].j_cap = 4;

    sum_vector(vect[0], vect[1]);
    return 0;
}

void sum_vector(struct vector vec_1, struct vector vec_2){
    struct vector vec_sum;
    vec_sum.i_cap = vec_1.i_cap + vec_2.i_cap;
    vec_sum.j_cap = vec_1.j_cap + vec_2.j_cap;

    printf("%d, %d", vec_sum.i_cap, vec_sum.j_cap);

}