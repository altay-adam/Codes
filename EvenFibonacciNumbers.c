#include<stdio.h>
#include<stdlib.h>

int main() {
	int first_number= 1;
	int second_number = 2;
	int third_number;
	int sum = 0;
	third_number = first_number + second_number;
	printf("Fibonacci sequence:%d\t%d\t%d\t",first_number,second_number,third_number);
	while (third_number < 4000000) {
		first_number = second_number;
		second_number = third_number;
		third_number = first_number + second_number;
		if (third_number < 4000000) {
			printf("%d\t", third_number);
			if (third_number % 2 == 0) {
				sum += third_number;
			}
		}
	}
	printf("\n");
	printf("the sum of the even-valued terms = %d", sum+2);
	return 0;
}
