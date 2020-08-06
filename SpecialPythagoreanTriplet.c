#include<stdio.h>

int main() {
	int a, b, c, aSquare, bSquare, cSquare, sum, Value;
	a = b = c = aSquare = bSquare = cSquare = Value = 0;
	sum = 1000;
	for (a = 1; a < sum / 3; a++) {   //Here a=1 and b=2,because according to the question a<b.
		for (b = 2; b < sum / 2; b++) { //a<sum/3 and b<sum/2 because according to the question a<b.
			c = sum - b - a;
			aSquare = a * a;
			bSquare = b * b;
			cSquare = c * c;
			if (aSquare + bSquare == cSquare) {
				Value = a * b * c;
				printf("a=%d\nb=%d\nc=%d\tProduct=%d", a, b, c, Value);
				return 0;
			}
		}
	}
}
