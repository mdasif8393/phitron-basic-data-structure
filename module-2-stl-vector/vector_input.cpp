#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* input with n
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //* input without n
    // vector<int> v1;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v1.push_back(x);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v1[i] << " ";
    // }

    return 0;
}