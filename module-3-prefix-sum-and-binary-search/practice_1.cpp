// https://docs.google.com/document/d/1SPtUOJ-qhHUZjQqwP7RpO-fFDtj9-vjwKqZob5DzbnE/edit?tab=t.0#heading=h.t6r5wwmzzjqf
#include <bits/stdc++.h>
using namespace std;

void add(vector<int> a, int n)
{

    vector<int> v(n);

    v[0] = a[0];

    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + a[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    add(a, n);

    return 0;
}