#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end (to create list)
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

// Insert Y after X
void insertAfterValue(Node* head, int X, int Y) {
    Node* temp = head;

    // search for X
    while (temp != NULL && temp->data != X) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Value " << X << " not found in list.\n";
        return;
    }

    // create new node
    Node* newNode = new Node;
    newNode->data = Y;

    // insert after X
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Original List:\n";
    display(head);

    insertAfterValue(head, 20, 25);

    cout << "\nUpdated List:\n";
    display(head);

    return 0;
}