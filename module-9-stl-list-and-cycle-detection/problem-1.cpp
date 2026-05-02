#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2;

    int x;
    while (cin >> x && x != -1)
    {

        l1.push_back(x);
    }

    int y;
    while (cin >> y && y != -1)
    {

        l2.push_back(y);
    }

    if (l1.size() != l2.size())
    {
        cout << "NO";
        return 0;
    }

    bool isSame = true;

    while (!l1.empty())
    {
        if (l1.front() != l2.front())
        {
            isSame = false;
            break;
        }
        l1.pop_front();
        l2.pop_front();
    }

    if (isSame)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}