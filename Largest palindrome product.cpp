#include<iostream>
using namespace std;

int main() {
	int rev_Product, product;
	int max = 0;
	int reverse;
	for (int i = 0; i <= 999; i++) {
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
	cout << max << " is the largest palindrome product made from the product of two 3-digit numbers.";

	return 0;
}
