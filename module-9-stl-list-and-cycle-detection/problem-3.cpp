#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int x;
    while (cin >> x && x != -1)
    {
        l.push_back(x);
    }

    bool isPalindrome = true;

    while (l.size() > 1)
    {
        if (l.front() != l.back())
        {
            isPalindrome = false;
            break;
        }
        l.pop_front();
        l.pop_back();
    }

    if (isPalindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}