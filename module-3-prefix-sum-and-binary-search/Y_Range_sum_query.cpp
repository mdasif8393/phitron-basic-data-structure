// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // make prefix sum from v vector
    vector<long long int> pre(n + 1);
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // calculate sum from left and right index
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long int sum = 0;

        // calculate sum from prefiix array
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}