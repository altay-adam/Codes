#include<stdlib.h>
#include<stdio.h>

int main() {
	int remainder;
	int i = 20;
	int j = 1;
	while (1) {
		 remainder = i % j;
		if (remainder == 0) {
			j++;
			if (j == 21) {
				break;
			}
		}
		else {
			i++;
			j = 1;
		}
	}
	printf("%d is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20.", i);

	return 0;
}
