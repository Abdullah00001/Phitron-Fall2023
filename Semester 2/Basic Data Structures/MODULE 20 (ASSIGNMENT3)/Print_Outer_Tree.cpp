#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputBtree()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);
    queue<Node *> parent;
    parent.push(root);
    while (!parent.empty())
    {
        Node *extract = parent.front();
        parent.pop();
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        extract->left = left;
        extract->right = right;
        if (extract->left)
            parent.push(extract->left);
        if (extract->right)
            parent.push(extract->right);
    }
    return root;
}
void prntLeft(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
    {
        prntLeft(root->left);
        cout << root->left->value << " ";
    }
    else if (root->right)
    {
        prntLeft(root->right);
        cout << root->right->value << " ";
    }
}
void prntRight(Node *root)
{
    if (root == NULL)
        return;
    if (root->right)
    {
        cout << root->right->value << " ";
        prntRight(root->right);
    }
    else if (root->left)
    {
        cout << root->left->value << " ";
        prntRight(root->left);
    }
}
int main()
{
    Node *root = inputBtree();
    if (root->left)
    {
        prntLeft(root);
    }
    cout << root->value << " ";
    if (root->right)
    {
        prntRight(root);
    }
    cout << endl;
    return 0;
}