#include <iostream>
using namespace std;

#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;

// Function to display queue
void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

// Enqueue Function
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Full. Cannot insert " << value << endl;
        return;
    }

    if (front == -1)
        front = 0; // first element

    rear++;
    queueArr[rear] = value;
    cout << "Inserted: " << value << endl;

    // Display updated queue
    display();
}

int main()
{
    enqueue(10); // Example insertions
    enqueue(20);
    enqueue(30);

    return 0;
}