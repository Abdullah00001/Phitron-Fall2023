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
Node *cnvrtToBST(int *arr, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftNodes = cnvrtToBST(arr, l, mid - 1);
    Node *rightNodes = cnvrtToBST(arr, mid + 1, r);
    root->left = leftNodes;
    root->right = rightNodes;
    return root;
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    Node *root = cnvrtToBST(arr, 0, n - 1);
    prntBSt(root);
    return 0;
}