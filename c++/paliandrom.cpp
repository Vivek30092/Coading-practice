#include<iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Reverse the given number
    while (originalNum != 0) {
        remainder = originalNum % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Append digit to reversedNum
        originalNum /= 10;  // Remove the last digit from originalNum
    }

    // Check if the original number is equal to the reversed number
    if (reversedNum == num)
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}