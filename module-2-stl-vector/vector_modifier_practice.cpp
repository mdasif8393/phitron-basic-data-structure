#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    v.erase(v.begin() + 2, v.begin() + 6);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}