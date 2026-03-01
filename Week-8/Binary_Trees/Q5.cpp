// 5. Find Minimum and Maximum in BST
// Question:
// (a) Write separate recursive functions to find the minimum and maximum node in a BST.
// (b) Write separate iterative (non-recursive) functions to find the minimum and maximum node in a BST.

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

// Insert (recursive, simple version)
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

// (a) Recursive Minimum
Node *findMinRecursive(Node *root)
{
    if (root == nullptr)
        return nullptr;

    if (root->left == nullptr)
        return root;

    return findMinRecursive(root->left);
}

// (a) Recursive Maximum
Node *findMaxRecursive(Node *root)
{
    if (root == nullptr)
        return nullptr;

    if (root->right == nullptr)
        return root;

    return findMaxRecursive(root->right);
}

// (b) Iterative Minimum
Node *findMinIterative(Node *root)
{
    if (root == nullptr)
        return nullptr;

    while (root->left != nullptr)
        root = root->left;

    return root;
}

// (b) Iterative Maximum
Node *findMaxIterative(Node *root)
{
    if (root == nullptr)
        return nullptr;

    while (root->right != nullptr)
        root = root->right;

    return root;
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
    insert(root, 60);
    insert(root, 80);

    Node *minRec = findMinRecursive(root);
    Node *maxRec = findMaxRecursive(root);

    Node *minItr = findMinIterative(root);
    Node *maxItr = findMaxIterative(root);

    cout << "Recursive Min: " << minRec->data << endl;
    cout << "Recursive Max: " << maxRec->data << endl;

    cout << "Iterative Min: " << minItr->data << endl;
    cout << "Iterative Max: " << maxItr->data << endl;

    return 0;
}

// Recursive:

// Keep going left (for min) until left becomes null.
// Keep going right (for max) until right becomes null.

// Iterative:

// Use while loop.
// Move left/right until you cannot go further.