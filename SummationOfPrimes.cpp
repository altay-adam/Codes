#include<iostream>
#include<math.h>
using namespace std;
int main() {
	 long long number = 2000000;
	 long long sum = 0;
	 long long i, j;
	 bool control = true;
	for (i = 2; i < number; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				control = false;
				break;
			}
		}
		if (control) {
			sum += i;
			cout << i << "\t" << sum << endl;
		}
		control = true;
	}
	
	return 0;
}
