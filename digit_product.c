#include <stdio.h>

int product(int n) {
	if (n < 10) {
		return n;
	}
   
	return n%10 * product(n/10);
}

int main() {
	int n = 0;

	printf("Enter the number: ");
	scanf("%d", &n);

	printf("The product %d", product(n));
	return 0;
}	
