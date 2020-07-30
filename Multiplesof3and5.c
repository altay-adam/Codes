#include<stdio.h>
#include<stdlib.h>

void toplam(int new_number) {
	int sum = 0;
	for (int i = 0; i < new_number; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("Sum of the numbers:%d", sum);
}

int main() {

	int number = 1000;
	toplam(number);

	return 0;
}
