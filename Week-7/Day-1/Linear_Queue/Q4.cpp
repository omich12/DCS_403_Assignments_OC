#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue function (for testing)
void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue is full!\n";
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = value;
}

// Peek / Front function
void peek() {
    cout << "============================\n";
    if (front == -1 || front > rear) {
        cout << "Queue is empty. No front element.\n";
    } else {
        cout << "Front element of the queue: " << queue[front] << endl;
    }
    cout << "============================\n";
}

// Display queue (for reference)
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example usage
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();  // show current queue
    peek();     // show front element

    return 0;
}