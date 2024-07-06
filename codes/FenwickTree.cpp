#include <iostream>
#include <vector>

using namespace std;

class FenwickTree
{

private:
    long long n;
    vector<long long> bit;

public:
    FenwickTree(long long n) : n(n), bit(n + 1, 0) {}

    void update(long long i, long long data)
    {
        while (i <= n)
        {
            bit[i] += data;
            i += i & -i;
        }
    }

    long long query(long long i)
    {
        long long result = 0;
        while (i > 0)
        {
            result += bit[i];
            i -= i & -i;
        }
        return result;
    }
};

int main()
{
    long long n, q;
    cin >> n >> q;

    FenwickTree fenwickTree(n);

    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
        fenwickTree.update(i + 1, arr[i]);
    }

    for (long long i = 0; i < q; ++i)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == 1) // update
        {
            fenwickTree.update(b, c - arr[b - 1]);
            arr[b - 1] = c;
        }
        else if (a == 2)
        {
            cout << fenwickTree.query(c) - fenwickTree.query(b - 1) << endl;
        }
    }
    return 0;
}
