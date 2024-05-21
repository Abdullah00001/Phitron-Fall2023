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
vector<int> levelNodes(Node *root, int X)
{
    vector<int> v;
    queue<pair<Node *, int>> p;
    p.push({root, 0});
    while (!p.empty())
    {
        pair<Node *, int> q = p.front();
        p.pop();
        Node *node = q.first;
        int level = q.second;
        if (level == X)
        {
            v.push_back(node->value);
        }
        if (node->left)
            p.push({node->left, level + 1});
        if (node->right)
            p.push({node->right, level + 1});
    }
    return v;
}
int main()
{
    Node *root = inputBtree();
    int level;
    cin >> level;
    vector<int> v;
    v = levelNodes(root, level);
    if (v.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}