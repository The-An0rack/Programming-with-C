//Program to find wether a number is a perfect number

#include <stdio.h>

int main(void) {
	int num, sum_of_factors = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i = 1; i < num; i++) {
	    if( (num % i) == 0 )
	        sum_of_factors += i;
	}
	
	if(sum_of_factors == num) {
	    printf("%d is a perfect number.", num);
	} else {
	    printf("%d is not a perfect number.", num);
	}
	return 0;
}

