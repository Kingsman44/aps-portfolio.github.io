#include <bits/stdc++.h>
using namespace std;
void build(int arr[], int tree[], int low, int high, int parent)
{
    if (low == high) // reached the leaf node
    {
        tree[parent] = arr[low];
        return;
    }
    int mid = (low + high) >> 1;
    build(arr, tree, low, mid, 2 * parent + 1);                     // left
    build(arr, tree, mid + 1, high, 2 * parent + 2);                // right
    tree[parent] = min(tree[2 * parent + 1], tree[2 * parent + 2]); // the value present in parent node is the min of left and right subtree
}

// int *constructST(int arr[], int n)
// {
//     int *tree = new int[4 * n + 1];
//     build(arr, tree, 0, n - 1, 0);
//     return tree;
// }

int helper(int tree[], int low, int high, int a, int b, int parent)
{
    if (low > b or high < a)
        return INT_MAX;
    if (a <= low and b >= high)
        return tree[parent];

    int mid = (low + high) >> 1;

    // find out the min in left and right subtree
    int left = helper(tree, low, mid, a, b, 2 * parent + 1);
    int right = helper(tree, mid + 1, high, a, b, 2 * parent + 2);

    return min(left, right);
}
int RMQ(int st[], int n, int a, int b)
{
    return helper(st, 0, n - 1, a, b, 0);
}
int main()
{
    int n;
    int q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // building the segment tree
    int *tree = new int[4 * n + 1];
    build(arr, tree, 0, n - 1, 0);

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << RMQ(tree, n, a-1, b-1)<<endl;
    }
}