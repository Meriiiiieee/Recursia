#include <stdio.h>
#define SIZE 5

int  printArr(int arr[], int size, int index) {
	if ( index == size) {
		return 0;
	}
		printf("%d",  arr[index]);
		printArr(arr, size, index + 1);
	
        
}

int main() {
	int arr[SIZE]= {};

	printf("Enter the elements: ");
	for(int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
        }

        printArr(arr, SIZE, 0);
        return 0;
}	
