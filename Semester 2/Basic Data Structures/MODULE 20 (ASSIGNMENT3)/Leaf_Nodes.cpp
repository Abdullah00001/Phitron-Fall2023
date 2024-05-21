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
void findLeaf(Node *root,vector<int>&v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->value);
    }
    findLeaf(root->left,v);
    findLeaf(root->right,v);
}
int main()
{
    Node *root=inputBtree();
    vector<int>v;
    findLeaf(root,v);
    sort(v.begin(),v.end(),greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}