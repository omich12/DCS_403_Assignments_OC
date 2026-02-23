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

// Enqueue: Insert element at rear
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue Overflow! Cannot insert " << value << endl;
        return;
    }

    if (isEmpty()) {
        front = 0;  // first element
    }

    rear = (rear + 1) % MAX;  // circular increment
    queue[rear] = value;

    cout << value << " inserted successfully.\n";
}

// Dequeue: Remove element from front
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Nothing to delete.\n";
        return;
    }

    cout << "Deleted: " << queue[front] << endl;

    if (front == rear) {
        // Queue has only one element, reset after deletion
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;  // circular increment
    }
}

// Display queue elements
void display() {
    cout << "============================\n";
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
    cout << "============================\n";
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);  // queue is now full

    display();

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);  // testing wrap-around

    display();

    return 0;
}