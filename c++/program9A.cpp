//to find out the Factorial of numbers without Recursion value taken by user.
#include <iostream>
using namespace std;

int factorialNonRecursive(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    cout << "Enter a number to find its factorial (non-recursive): ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorialNonRecursive(num) << endl;
    }

    return 0;
}