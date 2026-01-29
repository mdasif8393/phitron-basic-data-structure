#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int val;
    cin >> val;
    int flag = 0;

    // initialize left and right index
    int l = 0;
    int r = n - 1;

    // when left value will be greater then right value then end while loop
    while (l <= r)
    {
        // calculate mid index
        int mid = (l + r) / 2;

        // if found value then break the loop
        if (a[mid] == val)
        {
            flag = 1;
            break;
        }
        // if desire value is smaller than array value then right index will be
        else if (a[mid] > val)
        {
            r = mid - 1;
        }
        // if desire value is greater than array value then left index will be
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

    return 0;
}

/**
 * Input:
 * 5
 * 1 5 4 3 2
 * 5
 */