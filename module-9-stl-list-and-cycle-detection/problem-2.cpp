#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;

    int x;
    while (cin >> x && x != -1)
    {

        l1.push_back(x);
    }

    l1.reverse();

    for (auto val : l1)
    {
        cout << val << " ";
    }

    return 0;
}