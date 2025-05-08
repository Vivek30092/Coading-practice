#include<iostream>
#include<cmath>  // For the pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    // Input a number from user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Find the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the result equals the original number
    if ((int)result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
