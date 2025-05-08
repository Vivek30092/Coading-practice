//to implement Linear search algorithm and Binary search
#include <iostream>
using namespace std;

// Linear Search Function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Element not found
}

// Binary Search Function
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index of the found element
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int n, key, choice;

    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements in sorted order (for Binary Search): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    cout << "\nChoose Search Algorithm:\n1. Linear Search\n2. Binary Search\nEnter your choice: ";
    cin >> choice;

    int result = -1;
    if (choice == 1) {
        result = linearSearch(arr, n, key);
    } else if (choice == 2) {
        result = binarySearch(arr, 0, n - 1, key);
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
