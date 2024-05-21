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
Node *inputB_tree()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);
    queue<Node *> inputQueue;
    inputQueue.push(root);
    while (!inputQueue.empty())
    {
        Node *parent = inputQueue.front();
        inputQueue.pop();
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
        parent->left = left;
        parent->right = right;
        if (parent->left)
            inputQueue.push(parent->left);
        if (parent->right)
            inputQueue.push(parent->right);
    }
    return root;
}
void lvlOrder_prnt(Node *root)
{
    if (root == NULL)
    {
        cout << "tree is empty" << endl;
        return;
    }
    queue<Node *> parent;
    parent.push(root);
    while (!parent.empty())
    {
        Node *call_Fvalue = parent.front();
        parent.pop();
        cout << call_Fvalue->value << " ";
        if (call_Fvalue->left)
            parent.push(call_Fvalue->left);
        if (call_Fvalue->right)
            parent.push(call_Fvalue->right);
    }
}
int main()
{
    Node *root = inputB_tree();
    lvlOrder_prnt(root);
    return 0;
}