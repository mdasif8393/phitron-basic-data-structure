#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int x;
    while (cin >> x && x != -1)
    {
        l.push_back(x);
    };

    l.sort();

    while (!l.empty())
    {
        cout << l.front() << " ";
        l.pop_front();
    }

    return 0;
}