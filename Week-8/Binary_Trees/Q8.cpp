// 8. Application: Search After Deletion

// Question:
// Combine your previous code for insertion, deletion, and search.

// Write a program that lets the user:
// Build a BST with given values
// Delete a node by key
// Search for a specific key and print whether it exists after deletion

// Hint:
// Keep your functions modular.
// Call your search function after the delete operation.

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

// Insert (recursive)
Node *insert(Node *root, int value)
{
    if (root == nullptr)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        cout << "Duplicate value ignored.\n";

    return root;
}

// Search (iterative)
Node *search(Node *root, int key)
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

// Find minimum (used in deletion)
Node *findMin(Node *root)
{
    while (root->left != nullptr)
        root = root->left;
    return root;
}

// Delete function
Node *deleteNode(Node *root, int key)
{

    if (root == nullptr)
        return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else
    {
        // Case 1: No child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // Case 2: One child
        else if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        else
        {
            Node *successor = findMin(root->right);
            root->data = successor->data;
            root->right = deleteNode(root->right, successor->data);
        }
    }

    return root;
}

// Inorder traversal
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
    int n, value, deleteKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter key to delete: ";
    cin >> deleteKey;

    root = deleteNode(root, deleteKey);

    cout << "Enter key to search after deletion: ";
    cin >> searchKey;

    Node *result = search(root, searchKey);

    if (result != nullptr)
        cout << "Key " << searchKey << " exists in BST.\n";
    else
        cout << "Key " << searchKey << " does NOT exist in BST.\n";

    cout << "Current Inorder Traversal: ";
    inorder(root);

    return 0;
}