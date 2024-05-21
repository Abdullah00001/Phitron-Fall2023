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
void insertNode(Node *&root, int value)
{
    if (root == NULL)
    {
        root = new Node(value);
        return;
    }
    if (value < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(value);
        }
        else
        {
            insertNode(root->left, value);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(value);
        }
        else
        {
            insertNode(root->right, value);
        }
    }
}
void prntBSt(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << p->value << " ";
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    cout << endl;
}
int main()
{
    Node *root = inputBtree();
    insertNode(root, 17);
    insertNode(root, 18);
    insertNode(root, 27);
    insertNode(root, 30);
    prntBSt(root);
    return 0;
}