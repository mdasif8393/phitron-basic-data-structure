#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 2, 3, 4, 5};
    auto it = find(l.begin(), l.end(), 42);

    if (it == l.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}