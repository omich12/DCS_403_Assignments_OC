#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end (to create list easily)
void insertEnd(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Reverse linked list
void reverseList(Node* &head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }

    head = prev; // update head
}

// Main function
int main() {
    Node* head = NULL;

    // Creating list: 10 -> 20 -> 30 -> 40
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Original List: ";
    display(head);

    reverseList(head);

    cout << "Reversed List: ";
    display(head);

    return 0;
}