#include <stdio.h>
#define SIZE 5

int Max(int arr[], int size, int i) {
    if (i == SIZE - 1){
    return arr[i];
    }
    
    int max = Max(arr, size , i+1);
    
    if (arr[i]>max) {
        return arr[i];
    } else {
        return max;
      }
}

int Min(int arr[], int size, int i) {
    if (i == SIZE - 1){
        return arr[i];
    }    
    
    int min = Min(arr, size, i+1);
    if( arr[i]<min) {
        return arr[i];
    } else {
        return min;
    }
}
      
int main() {
    int arr[SIZE] = {}

    printf("Enter the elements: ");
    for(int i = 0; i<SIZE; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("The maximal number is: %d\n", Max(arr, SIZE, 0));
    printf("The minimal number is: %d\n", Min(arr, SIZE, 0));
    
    return 0;
}
