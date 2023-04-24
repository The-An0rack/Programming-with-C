//Program to calculate sum of digits

#include <stdio.h>

int main(void) {
	int num, sum = 0;
	printf("Enter a positive number: ");
	scanf("%d",&num);
	while(num) {
	    sum = sum + (num% 10);
	    num = num / 10;
	}
	printf("Required sum: %d", abs(sum));
	return 0;
}

