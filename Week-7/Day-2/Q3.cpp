#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Insert node at the end
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();   // create new node
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        return newNode;
    }

    // Traverse to last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = newNode;

    return head;
}

// Display linked list
void display(Node* head) {
    cout << "============================\n";
    cout << "Linked List: ";

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n============================\n";
}

int main() {
    Node* head = NULL;

    // Insert elements
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    display(head);

    // Insert new value at end
    int value;
    cout << "Enter value to insert at end: ";
    cin >> value;

    head = insertAtEnd(head, value);

    // Print updated list
    display(head);

    return 0;
}