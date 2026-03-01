// 6. Delete a Node from BST
// Question:
// Implement a function that deletes a node from a BST given a key, maintaining the BST properties.


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

// Find Minimum (used for 2-child case)
Node *findMin(Node *root)
{
    while (root->left != nullptr)
        root = root->left;
    return root;
}

// Delete Function
Node *deleteNode(Node *root, int key)
{

    if (root == nullptr)
        return nullptr;

    // Search for the node
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else
    {
        // Node found

        // Case 1: No child (Leaf)
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

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Before Deletion: ";
    inorder(root);

    root = deleteNode(root, 70); // Delete node with value 70
    // also can change the value to test other cases (leaf, one child, two children)

    cout << "\nAfter Deletion: ";
    inorder(root);

    return 0;
}