// Check if a binary tree is a sum tree or not

// SOLUTION 
#include <iostream>
#include <climits>
using namespace std;
 
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
int isSumTree(Node* root)
{
    if (root == nullptr) {
        return 0;
    }
 

    if (root->left == nullptr && root->right == nullptr) {
        return root->key;
    }
 
    int left = isSumTree(root->left);
    int right = isSumTree(root->right);
 
    if (left != INT_MIN && right != INT_MIN && root->key == left + right) {
        return 2 * root->key;
    }
 
    return INT_MIN;
}
 
int main()
{
 
    Node* root = new Node(44);
    root->left = new Node(9);
    root->right = new Node(13);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
 
    if (isSumTree(root) != INT_MIN) {
        cout << "Binary tree is a sum tree";
    }
    else {
        cout << "Binary tree is not a sum tree";
    }
 
    return 0;
}