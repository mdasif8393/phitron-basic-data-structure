#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 10, 30, 40, 50, 50, 60, 40, 20, 80, 90};
    l.sort(greater<int>());
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}