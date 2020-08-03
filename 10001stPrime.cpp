#include<iostream>
using namespace std;

int main() {
	int counter = 0; //This variable is for checking the number which is prime.
	int counter2 = 0; // This variable is for checking the number which is prime or not.
	int remainder = 0;

	for (int i = 2; ;i++) { //First for loop starts with 2 because 1 divides all numbers.
		for (int j = 2; j <= sqrt(i); j++) { //Second for loop also starts with 2 because 1 divided by all numbers.
			remainder = i % j;
			if (remainder == 0) {  //If '0' , is the mode of i with j ; counter2 increases 1 and second for loop breaks. This means: i is not prime number.
				counter2++;
				break;
			}
		}
		if (counter2 == 0) { // If counter2 equals '0', counter increases 1. This means: i is prime number. At the bottom line as you can see counter increases 1 because of that.
			counter++;
			if (counter == 10001) { //As the question, if counter reaches 10001 print 10001st prime number on screen and first for loop breaks.
				cout << i; break;
			}
		}
		counter2 = 0; // If counter can't reach 10001 or if counter2 doesn't equal 0 , counter2 equals 0 again to continue two loops.
	}

	return 0;
}
