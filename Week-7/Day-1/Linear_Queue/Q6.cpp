#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if queue is empty
bool isEmpty() {
    return (front == -1 || front > rear);
}

// Function to check if queue is full
bool isFull() {
    return (rear == MAX - 1);
}

// Enqueue function (for testing)
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full! Cannot insert " << value << endl;
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = value;
    cout << value << " inserted successfully.\n";
}

// Dequeue function (for testing)
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty! Cannot delete.\n";
        return;
    }
    cout << "Deleted: " << queue[front] << endl;
    front++;
    if (front > rear) front = rear = -1; // reset queue if empty
}

int main() {
    // Example usage
    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    dequeue();
    dequeue();
    dequeue();

    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}