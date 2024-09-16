# include <stdio.h>

void reverse_arr(int arr[], int n);

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    reverse_arr(arr, 10);
    return 0;
}

void reverse_arr(int arr[], int n){
    int reversed_arr[n];
    for (int i = 0; i< n; i++){
        reversed_arr[n-1-i] = arr[i];
    }
    for (int i = 0; i< n; i++){
        printf("%d ", reversed_arr[i]);
    }
}