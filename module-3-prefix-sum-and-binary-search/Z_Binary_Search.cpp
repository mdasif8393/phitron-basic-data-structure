// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;

        int flag = 0;

        // initialize left right index
        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            // get mid index
            int mid = (l + r) / 2;

            // if value matched with mid index array then break the loop
            if (a[mid] == val)
            {
                flag = 1;
                break;
            }
            // initialize right index
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            // initialize left index
            else
            {
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }
}

/**
 * Input:
5 3
1 5 4 3 2
5
3
6
 */