// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3;

    for (int i = 0; i < n; i++)
    {
        v3.push_back(v2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        v3.push_back(v1[i]);
    }

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    return 0;
}