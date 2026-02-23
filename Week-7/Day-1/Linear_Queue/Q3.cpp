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

// Enqueue Function (for testing)
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Full. Cannot insert " << value << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queueArr[rear] = value;
    cout << "Inserted: " << value << endl;
    display();
}

// Dequeue Function
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is Empty. Cannot delete." << endl;
        return;
    }

    cout << "Deleted: " << queueArr[front] << endl;
    front++;

    // Reset queue when empty
    if (front > rear)
    {
        front = rear = -1;
    }

    display();
}

int main()
{
    // Example operations
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue(); // Removes 10
    dequeue(); // Removes 20
    dequeue(); // Removes 30
    dequeue(); // Queue empty

    return 0;
}