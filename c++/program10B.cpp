#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void displayFibonacciRecursive(int n) {
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacciRecursive(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci series (recursive): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        displayFibonacciRecursive(n);
    }

    return 0;
}