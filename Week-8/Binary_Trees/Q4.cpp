// 4. Non-Recursive Insertion in BST
// Question:
// Implement an iterative version of BST insertion. The function should avoid inserting duplicate keys.

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

// Iterative Insert (No Recursion)
Node *insertIterative(Node *root, int value)
{

    Node *newNode = createNode(value);

    // Case 1: Tree is empty
    if (root == nullptr)
        return newNode;

    Node *parent = nullptr;
    Node *current = root;

    // Traverse to find correct position
    while (current != nullptr)
    {
        parent = current;

        if (value < current->data)
            current = current->left;

        else if (value > current->data)
            current = current->right;

        else
        {
            // Duplicate found
            cout << "Duplicate value " << value << " ignored.\n";
            delete newNode; // free memory
            return root;
        }
    }

    // Insert new node
    if (value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

// Inorder Traversal (to verify BST)
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

    root = insertIterative(root, 50);
    insertIterative(root, 30);
    insertIterative(root, 70);
    insertIterative(root, 20);
    insertIterative(root, 40);
    insertIterative(root, 20); // Duplicate
    insertIterative(root, 40); // Duplicate

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}