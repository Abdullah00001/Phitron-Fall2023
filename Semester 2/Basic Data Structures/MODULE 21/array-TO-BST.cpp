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
Node *arrToBst(int *arr, int n, int l, int r)
{
    if (l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftRoot = arrToBst(arr, n, l, mid - 1);
    Node *rightRoot = arrToBst(arr, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
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
    Node *root = arrToBst(arr, n, 0, n - 1);
    prntBSt(root);
    return 0;
}