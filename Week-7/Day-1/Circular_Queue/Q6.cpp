#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if circular queue is empty
bool isEmpty() {
    return (front == -1);
}

// Function to check if circular queue is full
bool isFull() {
    return ((rear + 1) % MAX == front);
}

// Enqueue function (for testing)
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue Overflow! Cannot insert " << value << endl;
        return;
    }
    if (isEmpty()) front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    cout << value << " inserted successfully.\n";
}

// Dequeue function (for testing)
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Nothing to delete.\n";
        return;
    }
    cout << "Deleted element: " << queue[front] << endl;
    if (front == rear) {
        // Only one element, reset queue
        front = rear = -1;
    } else {
        front = (front + 1) % MAX; // circular increment
    }
}

int main() {
    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // queue full now

    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    dequeue();
    dequeue();

    cout << "After deleting 2 elements:\n";
    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}