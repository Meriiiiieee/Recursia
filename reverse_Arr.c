#include <stdio.h>
#define SIZE 5

int  reverseArr(int arr[], int i, int j) {
	if (i >= j ) {
		return 0;
	}
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		reverseArr(arr, i+1, j-1);
	
        
}

int main() {
	int arr[SIZE]= {};
	int i = 0; 
	int j = 0;

	printf("Enter the elements: ");
	for(int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
        }

        reverseArr(arr, 0, SIZE-1);

	printf("Reversed array: ");
	for(int i =0; i<SIZE; i++) {
		printf("%d", arr[i]);
	}

        return 0;
}	
