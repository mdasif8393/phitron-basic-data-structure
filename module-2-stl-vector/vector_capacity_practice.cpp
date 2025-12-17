#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.resize(12, 2);
    for (int i = 0; i < 12; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;

    return 0;
}