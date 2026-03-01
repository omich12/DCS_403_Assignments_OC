// 1. Recursive Search in BST
// Question:
// Write a C++ function that searches for a key in a BST using recursion.
// The function should return a pointer to the node if found, or nullptr if not found.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Create new node
Node *createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Insert into BST
Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return createNode(value);
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Recursive Search
Node *search(Node *root, int key)
{
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main()
{
    Node *root = nullptr;
    int n, value, key;

    cout << "How many nodes do you want to insert? ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter the key to search: ";
    cin >> key;

    Node *result = search(root, key);

    if (result != nullptr)
        cout << "Key " << key << " found in the BST.\n";
    else
        cout << "Key " << key << " not found in the BST.\n";

    return 0;
}