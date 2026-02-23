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

// Enqueue function (for testing)
void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        cout << "Queue Overflow! Cannot insert " << value << endl;
        return;
    }
    if (isEmpty()) front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = value;
}

// Display / Traversal function for circular queue
void display() {
    cout << "============================\n";
    if (isEmpty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Circular Queue elements from front to rear: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX; // wrap around using modulo
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
    enqueue(50); // queue full

    enqueue(60); // should show overflow message

    display(); // show all elements

    return 0;
}