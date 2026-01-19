#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // for (int i = n; i >= 1; i /= 3)
    // {
    //     cout << i << endl;
    // }

    int n;
    cin >> n;

    int k = 2;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i = i * k;
    }

    return 0;
}