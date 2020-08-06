#include<iostream>
using namespace std;

int main() {
	int a, b, c, aSquare, bSquare, cSquare, sum, Value;
	a = b = c = aSquare = bSquare = cSquare = Value = 0;
	sum = 1000;
	for (a = 1; a < sum / 3; a++) {
		for (b = 2; b < sum / 2; b++) {
			c = sum - b - a;
			aSquare = a * a;
			bSquare = b * b;
			cSquare = c * c;
			if (aSquare + bSquare == cSquare) {
				Value = a * b * c;
				cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << "\t" << "Product=" << Value;
				return 0;
			}
		}
	}
}
