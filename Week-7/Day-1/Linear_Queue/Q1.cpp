
#include <iostream>
using namespace std;

#define MAX 5

int queueArr[MAX];
int front = -1;
int rear = -1;

// Enqueue (Insert)
void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue is Full" << endl;
    } 
    else {
        if (front == -1)
            front = 0;  // first element

        rear++;
        queueArr[rear] = value;
        cout << "Inserted: " << value << endl;
    }
}

// Dequeue (Remove)
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
    } 
    else {
        cout << "Deleted: " << queueArr[front] << endl;
        front++;

        // reset queue when empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Display Queue
void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } 
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }
}