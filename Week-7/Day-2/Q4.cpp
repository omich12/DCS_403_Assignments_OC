#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Insert node at the beginning
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();   // create new node
    newNode->data = value;

    newNode->next = head; // point new node to current head
    head = newNode;       // update head

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

    // Insert initial elements
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    display(head);

    // Insert new value at beginning
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    head = insertAtBeginning(head, value);

    // Print updated list
    display(head);

    return 0;
}