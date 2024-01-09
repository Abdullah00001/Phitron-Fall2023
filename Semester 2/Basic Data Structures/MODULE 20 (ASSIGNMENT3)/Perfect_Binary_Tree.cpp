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
int cntBtree(Node *root)
{
    if (root == NULL)
        return 0;
    int l = cntBtree(root->left);
    int r = cntBtree(root->right);
    return l + r + 1;
}
int cntHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = cntHeight(root->left);
    int r = cntHeight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = inputBtree();
    int sizeBtree = cntBtree(root);
    int height = cntHeight(root);
    if (pow(2, height) - 1 == sizeBtree)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}