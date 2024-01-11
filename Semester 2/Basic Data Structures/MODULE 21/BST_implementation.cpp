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
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
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
        p->left = left;
        p->right = right;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
bool searchInTree(Node *root, int X)
{
    if (root == NULL)
        return false;
    if (root->value == X)
        return true;
    if (X < root->value)
        return searchInTree(root->left, X);
    else
        return searchInTree(root->right, X);
}
int main()
{
    Node *root = inputBtree();
    int X;
    cin >> X;
    if (searchInTree(root, X))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}