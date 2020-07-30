#include<iostream>
using namespace std;

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
	cout << i << " is the smallest positive number that evenly divisible by the all of the numbers from 1 to 20.";

	return 0;
}
