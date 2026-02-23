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

// Display/Traversal function
void display() {
    cout << "============================\n";
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements from front to rear: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
    cout << "============================\n";
}

int main() {
    // Example usage
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);


    display();  // show all elements in queue

    return 0;
}