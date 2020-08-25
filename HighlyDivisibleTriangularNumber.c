#include <stdio.h>
int main() {
	int divisorCounter = 0;
	int Value = 0;
	int number = 1;
	int temp;  //It's temporary variable. I'm gonna equal it to the number temporarily.
	while (true) {
		Value += number;
		temp = number;
		number = 1;
		while (number<=Value){
			if (Value % number == 0) {
				divisorCounter++;
			}
			number++;
		}
		number = temp;
		if (divisorCounter > 500) {
			printf("%d", Value); break;
		}
		number++;
		divisorCounter = 0;
	}
	
	return 0;
}
