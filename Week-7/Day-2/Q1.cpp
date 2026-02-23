#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Function to create linked list from array
Node* createList(int arr[], int size) {
    Node *head = NULL, *temp, *newNode;

    for (int i = 0; i < size; i++) {
        newNode = new Node();      // create new node
        newNode->data = arr[i];    // assign data
        newNode->next = NULL;      // next pointer

        if (head == NULL) {
            head = newNode;        // first node
        } else {
            temp->next = newNode;  // link node
        }
        temp = newNode;
    }
    return head;
}

// Function to traverse and print linked list
void display(Node* head) {
    cout << "============================\n";
    cout << "Linked List elements: ";

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n============================\n";
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    // Create linked list
    Node* head = createList(arr, size);

    // Traverse and print list
    display(head);

    return 0;
}