#include <iostream>
using namespace std;

#define SIZE 5 // Define the size of the queue

class LinearQueue {
private:
    int queue[SIZE]; // Array to hold the elements of the queue
    int front, rear; // Front and rear pointers

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isqfull() {
        return rear == SIZE - 1;
    }

    // Check if the queue is empty
    bool isqempty() {
        return front == -1 || front > rear;
    }

    // Insert an element into the queue
    void insert(int value) {
        if (isqfull()) {
            cout << "Queue is full. Cannot insert." << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        cout << value << " inserted into the queue." << endl;
    }

    // Delete an element from the queue
    void deleteElement() {
        if (isqempty()) {
            cout << "Queue is empty. Cannot delete." << endl;
            return;
        }
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }

    // Display the elements in the queue
    void display() {
        if (isqempty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
    int choice, value;

    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Check if Queue is Full\n";
        cout << "5. Check if Queue is Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            q.insert(value);
            break;
        case 2:
            q.deleteElement();
            break;
        case 3:
            q.display();
            break;
        case 4:
            if (q.isqfull()) {
                cout << "Queue is full." << endl;
            } else {
                cout << "Queue is not full." << endl;
            }
            break;
        case 5:
            if (q.isqempty()) {
                cout << "Queue is empty." << endl;
            } else {
                cout << "Queue is not empty." << endl;
            }
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}