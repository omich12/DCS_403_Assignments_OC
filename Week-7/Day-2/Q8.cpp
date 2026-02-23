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

// Function to count nodes
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;           // increase counter
        temp = temp->next; // move to next node
    }

    return count;
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
    insertEnd(head, 40);

    display(head);

    cout << "Number of nodes = " << countNodes(head);

    return 0;
}