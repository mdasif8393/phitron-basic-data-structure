#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    cout << v.size() << endl;

    cout << v.max_size() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;

    // v.clear();
    cout << v.size() << endl;
    cout << v[0] << endl;

    cout << v.empty() << endl;

    v.resize(7, 100);
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}