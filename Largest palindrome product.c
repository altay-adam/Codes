#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int product, reverse, rev_Product, max;
	max = 0;
	for (int i = 100; i <= 999; i++) {
		for (int j = i; j <= 999; j++) {
			product = i * j;
			rev_Product = product;
			reverse = 0;
			while (rev_Product > 0) {
				reverse = reverse * 10 + rev_Product % 10;
				rev_Product /= 10;
			}
			if (reverse == product) {
				if (product > max) {
					max = product;
				}
			}
		}
	}
	printf("%d is the largest product made from the product of two 3-digit numbers.", max);
	return 0;
}
