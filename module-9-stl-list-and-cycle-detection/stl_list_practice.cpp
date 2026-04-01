#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l(v.begin(), v.end());
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}