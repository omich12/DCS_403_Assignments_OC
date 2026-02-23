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

// Peek / Front function
void peek() {
    cout << "============================\n";
    if (isEmpty()) {
        cout << "Queue is empty. No front element.\n";
    } else {
        cout << "Front element of the queue: " << queue[front] << endl;
    }
    cout << "============================\n";
}

// Display function (optional, for reference)
void display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();  // show queue
    peek();     // show front element

    return 0;
}