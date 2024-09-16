# include <stdio.h>

int count_odd(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    printf("Number of odd elements: %d\n", count_odd(arr, 9));
    return 0;
}

int count_odd(int arr[], int n){
    int count_odd = 0;
    for (int i=0; i < n ; i++){
        if (arr[i] %2 == 1){
            count_odd++;
        }
    }
    return count_odd;
}