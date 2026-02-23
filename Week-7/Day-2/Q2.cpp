#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Create linked list from array (for testing)
Node* createList(int arr[], int size) {
    Node *head = NULL, *temp, *newNode;

    for (int i = 0; i < size; i++) {
        newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }
    return head;
}

// Search function
void searchElement(Node* head, int X) {
    int position = 1;
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == X) {
            cout << "Element found at position: " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Element not present in the list." << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    Node* head = createList(arr, size);

    int X;
    cout << "Enter value to search: ";
    cin >> X;

    searchElement(head, X);

    return 0;
}