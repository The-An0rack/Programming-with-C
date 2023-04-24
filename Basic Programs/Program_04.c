// Program to check whether a number is prime or not

#include <stdio.h>

int main(void) {
	int num, flag = 1;
	printf("Enter a positive number: ");
	scanf("%d",&num);
	if(num <= 0) {
	    printf("Entered number must be positive.");
	} else if(num == 1) {
	    printf("1 is neither prime nor composite");
	} else {
	    for(int i = 2; i < num; i++) {
	        if( (num%i) == 0) {
	            flag = 0;
	            break;
	        }
	    }
	    
	    if(flag == 1) {
	        printf("Entered number is prime.");
	    } else {
	        printf("Entered number if composite.");
	    }
	}
	return 0;
}

