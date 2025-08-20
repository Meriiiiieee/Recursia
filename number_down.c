#include <stdio.h>
int  number_down(int n) {
	if (n <= 0) {
	    printf("%d", n);
	    return 0;
	}
	    printf("%d", n);
            return number_down(n - 1);
	
        
}

int main() {
	int n = 0;

	printf("Enter the number: ");
	scanf("%d", &n);

	number_down(n);
	return 0;
}	
