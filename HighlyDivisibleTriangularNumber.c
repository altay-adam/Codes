#include <stdio.h>
int main() {
	int Value = 0;
	int tourCounter = 1;
	int product = 1;
	while (true) {
		Value += tourCounter; //Everytime, topCounter is added to Value to find triangle numbers.
		int number = 2;
		int temp = Value; //Temporary variable
		int counter = 0;
		while (temp >= 1) {  //In this loop, we're gonna find every divisors that can divide the triangle numbers sequence.
			if (temp % number == 0) {	//Here, we divide temp to the number until our remainder equals 0. This is because to find multipliers of the temp(Value).
				temp = temp / number;
				counter++;
			}
			else {
				number++;		// If the number can't divide the temp without remainder, number increases 1.
				if (counter > 0) {
					product *= (counter + 1);  //Product equals that "(counter+1)*product". This is because to find count of the multipliers of the temp(Value).
				}
				counter = 0;
				if (temp == 1) {
					break;
				}
			}
		}
		if (product > 500) {
			printf("%d", Value); break;
		}
		tourCounter++;		//Every end of the loop tourCounter increases 1 to find squence of the triangle numbers.(1,3,6,10,15,21,28....)
		product = 1;     //Every end of the loop we equal product to 1.
	}

	return 0;
}
