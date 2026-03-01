// 2. Non-Recursive (Iterative) Search in BST
// Question:
// Implement a function that searches for a given key in a BST without using recursion.

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
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Iterative Search
Node *searchIterative(Node *root, int key)
{
    while (root != nullptr)
    {
        if (root->data == key)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main()
{
    Node *root = nullptr;

    // Fixed BST values
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key;

    cout << "Enter key to search: ";
    cin >> key;

    Node *result = searchIterative(root, key);

    if (result != nullptr)
        cout << "Key " << key << " found in the BST.\n";
    else
        cout << "Key " << key << " not found in the BST.\n";

    return 0;
}