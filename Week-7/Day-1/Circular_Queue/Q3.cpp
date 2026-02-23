#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Check if circular queue is empty
bool isEmpty() {
    return (front == -1);
}

// Check if circular queue is full
bool isFull() {
    return ((rear + 1) % MAX == front);
}

// Display function
void display() {
    // cout << "============================\n";
    if (isEmpty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
    // cout << "============================\n";
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
    display();
}

// Dequeue function for circular queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Nothing to delete.\n";
        return;
    }

    cout << "Deleted element: " << queue[front] << endl;

    if (front == rear) {
        // Queue has only one element, reset after deletion
        front = rear = -1;
    } else {
        // Circular increment of front
        front = (front + 1) % MAX;
    }

    display();  // show updated queue
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // queue full

    dequeue(); // remove 10
    dequeue(); // remove 20

    enqueue(60); // test wrap-around
    enqueue(70); // test wrap-around

    return 0;
}