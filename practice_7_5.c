# include <stdio.h>

void fibonnci(int arr[], int n);
void print_arr(int arr[], int n);

int main(){
    int n;
    printf("enter how many numbers you want from the fibonacci series:");
    scanf("%d",&n);
    int arr[n];
    fibonnci(arr,n);
    print_arr(arr, n);
    return 0;
}

void print_arr(int arr[], int n){
    for (int i =0; i < n; i++){
        printf("%d \t", arr[i]);
    }
}

void fibonnci(int arr[], int n){
    arr[0] = 0;
    arr[1] = 1;
    for (int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
}