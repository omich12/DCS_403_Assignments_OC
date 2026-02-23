#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end (for testing)
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Delete node by value
Node* deleteByValue(Node* head, int X) {

    // Case 1: List is empty
    if (head == NULL) {
        cout << "List is empty.\n";
        return head;
    }

    // Case 2: Value at head
    if (head->data == X) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Element deleted successfully.\n";
        return head;
    }

    // Case 3: Search for value
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL && current->data != X) {
        prev = current;
        current = current->next;
    }

    // Value not found
    if (current == NULL) {
        cout << "Element not found.\n";
        return head;
    }

    // Delete node
    prev->next = current->next;
    delete current;

    cout << "Element deleted successfully.\n";
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

    // Create list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    display(head);

    int X;
    cout << "Enter value to delete: ";
    cin >> X;

    head = deleteByValue(head, X);

    // Print updated list
    display(head);

    return 0;
}