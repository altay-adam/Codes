#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long number = 600851475143;
	long  i = 2;
	long  j = 2;
	long  remainder;
	long  remainder2;
	for (i = 2; i <= sqrt(number); i++) {
		remainder = number % i;
		if (remainder == 0) {
			for (j = 2; j <= sqrt(i); j++) {
				remainder2 = i % j;
				if (remainder2 == 0) {
					break;
				}
			}
			if (remainder2 != 0) {
				cout << i << "\t";
			}
		}
	}

	return 0;
}
