#include<iostream>
using namespace std;

int main() {
	int first_term= 1;
	int second_term = 2;
	int third_term;
	int sum = 0;
	third_term = first_term + second_term;
	cout << "Fibonacci sequence:";
	cout << first_term << "\t" << second_term << "\t" << third_term << "\t";
	while (ucuncu_terim < 4000000) {
		first_term = second_term;
		second_term = third_term;
		third_term = first_term + second_term;
		if (third_term < 4000000) {
			cout << third_term << "\t";
			if (third_term % 2 == 0) {
				sum += third_term;
			}
		}
	}
	cout <<"\t"<< "the sum of the even-valued terms:" << sum + 2;
	return 0;
}
