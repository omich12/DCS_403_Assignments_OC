// 3. Recursive Insertion in BST
// Question:
// Write a function to insert a node into a BST recursively.
// The function should avoid inserting duplicate keys.

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

// Recursive Insert (No Duplicates Allowed)
Node *insert(Node *root, int value)
{

    // If tree is empty, create new node
    if (root == nullptr)
        return createNode(value);

    // Go left
    if (value < root->data)
        root->left = insert(root->left, value);

    // Go right
    else if (value > root->data)
        root->right = insert(root->right, value);

    // If value == root->data (duplicate)
    else
        cout << "Duplicate value " << value << " ignored.\n";

    return root;
}

// Inorder Traversal (to check BST)
void inorder(Node *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *root = nullptr;

    // Insert values
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70); // Duplicate
    insert(root, 30); // Duplicate

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}