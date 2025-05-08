//a)to find out the Fibonacci series of numbers without Recursion  value taken by user
#include <iostream>
using namespace std;

void fibonacciNonRecursive(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci series: ";
    if (n >= 1) cout << first << " ";
    if (n >= 2) cout << second << " ";

    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci series (non-recursive): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        fibonacciNonRecursive(n);
    }

    return 0;
}
