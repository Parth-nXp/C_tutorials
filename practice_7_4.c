# include <stdio.h>

void reverse_arr(int arr[], int n);
void print_arr(int arr[], int n);



int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    reverse_arr(arr, 10);
    print_arr(arr, 10);
    return 0;
}

void print_arr(int arr[], int n){
    for (int i =0; i < n; i++){
        printf("%d \t", arr[i]);
    }
}

void reverse_arr(int arr[], int n){
    int temp;
        for(int i=0; i<n/2; i++){
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }

}