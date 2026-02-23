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

// Print in reverse using recursion
void printReverse(Node* head) {
    if (head == NULL)
        return;

    printReverse(head->next);  // go to end
    cout << head->data << " "; // print while returning
}

// Display normal list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Original List:\n";
    display(head);

    cout << "\nReverse Order (without changing list):\n";
    printReverse(head);

    return 0;
}