#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int sum1=0;
	int sum2=0;
	int square1;
	int the_difference;
	for (int i = 1; i <= 100; i++) {
		sum1 += i;
	}
	square1 = pow(sum1, 2);
	for (int j = 1; j <= 100; j++) {
		sum2 += pow(j, 2);
	}
	the_difference = square1 - sum2;
	cout << "The difference = " << the_difference;
	return 0;
}
