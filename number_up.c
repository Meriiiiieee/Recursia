#include <stdio.h>
int  number_up(int n) {
	if (n == 0) {
	    printf("0");
	    return 0;
	}
	     number_up(n - 1);
	     printf("%d", n);
	
        
}

int main() {
	int n = 0;

	printf("Enter the number: ");
	scanf("%d", &n);

	number_up(n);
	return 0;
}	
