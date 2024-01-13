#include <bits/stdc++.h>
using namespace std;
void insrtHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIndex = v.size() - 1;
    while (curIndex != 0)
    {
        int parentIndex = (curIndex - 1) / 2;
        if (v[parentIndex] < v[curIndex])
        {
            swap(v[parentIndex], v[curIndex]);
        }
        else
            break;
        curIndex = parentIndex;
    }
}
void dltHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curIndex = 0;
    while (true)
    {
        int leftChild = (curIndex * 2) + 1;
        int rightChild = (curIndex * 2) + 2;
        int lastIndex = v.size() - 1;
        if (leftChild < lastIndex && rightChild < lastIndex)
        {
            if (v[leftChild] >= v[rightChild] && v[leftChild] > v[curIndex])
            {
                swap(v[leftChild], v[curIndex]);
                curIndex = leftChild;
            }
            else if (v[rightChild] >= v[leftChild] && v[rightChild] > v[curIndex])
            {
                swap(v[rightChild], v[curIndex]);
                curIndex = rightChild;
            }
            else
                break;
        }
        else if (leftChild < lastIndex)
        {
            if (v[leftChild] > v[curIndex])
            {
                swap(v[leftChild], v[curIndex]);
                curIndex = leftChild;
            }
            else
                break;
        }
        else if (rightChild < lastIndex)
        {
            if (v[rightChild] > v[curIndex])
            {
                swap(v[rightChild], v[curIndex]);
                curIndex = rightChild;
            }
            else
                break;
        }
        else
            break;
    }
}
void prntHeap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        insrtHeap(v, x);
    }
    dltHeap(v);
    prntHeap(v);
    return 0;
}