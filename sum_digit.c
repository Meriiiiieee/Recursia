#include <stdio.h>

int sumOfDigit(int n) {
	if (n < 10) {
	    return n;
	}
       
        return n%10 + sumOfDigit(n/10);
}

int main() {
	int n = 0;

        printf("Enter the number: ");
	scanf("%d", &n);

	printf("Sum of digits %d", sumOfDigit(n));
	return 0;
}
