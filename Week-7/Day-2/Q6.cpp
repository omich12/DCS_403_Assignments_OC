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

// Delete node at given position (1-based index)
Node* deleteAtPosition(Node* head, int pos) {

    // Case 1: List is empty
    if (head == NULL) {
        cout << "List is empty.\n";
        return head;
    }

    // Case 2: Delete first node (head)
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted successfully.\n";
        return head;
    }

    // Traverse to node before given position
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position.\n";
        return head;
    }

    // Delete node
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    cout << "Node deleted successfully.\n";
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

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    head = deleteAtPosition(head, pos);

    // Print updated list
    display(head);

    return 0;
}