//Program to reverse a number

#include <stdio.h>

int main(void) {
	int num, ans = 0;
	printf("Enter a positive number: ");
	scanf("%d",&num);
	if(num < 0) {
	    printf("Entered number is not positive.");
	} else {
	    while(num > 0) {
	        ans = (ans*10) + num%10;
	        num = num / 10;
	    }
	    printf("Entered number when reversed gives: %d",ans);
	}
	return 0;
}

