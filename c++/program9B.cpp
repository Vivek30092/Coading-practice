//to find out the Factorial of numbers by using Recursion value taken by user.
#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    cout << "Enter a number to find its factorial (recursive): ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorialRecursive(num) << endl;
    }

    return 0;
}
