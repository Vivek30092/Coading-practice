#include <iostream>
using namespace std;

int main() {
    try {
        // Code that might throw an exception
        int number = 10;
        if (number == 10) {
            throw "An exception occurred!"; // Throw an exception
        }
    } catch (const char* msg) {
        // Handle the exception
        cout << "Caught exception: " << msg << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
