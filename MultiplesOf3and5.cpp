
#include <iostream>
using namespace std;
void SumOfTheNumbers(int new_number) {
    int sum = 0;
    for (int i = 0; i < new_number; i++) {

        if (i % 3 == 0) {
            sum += i;
        }
        else if (i % 5 == 0) {
            sum += i;
        }
    }
    cout << "Sum of the numbers=" << sum;
}
int main()
{
    int number = 1000;
    SumOfTheNumbers(number);
    return 0;
}


