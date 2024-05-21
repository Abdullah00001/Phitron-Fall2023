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
int sumParents(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = sumParents(root->left);
    int r = sumParents(root->right);
    return l + r + root->value;
}
int main()
{
    Node *root = inputBtree();
    int sum = sumParents(root);
    cout << sum << endl;
    return 0;
}