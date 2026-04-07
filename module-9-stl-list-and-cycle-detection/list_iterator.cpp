#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6, 7};

    //* myList.begin(). Pointer to the first element.
    cout << *l.begin() << endl;
    //* myList.end().Pointer to the last element.
    cout << *l.end() - 1;

    for (int val : l)
    {
        cout << val << " ";
    }

    for (auto it = l.begin(); it != l.end(); it++)
    {
        // cout << *it << " ";
    }

    return 0;
}