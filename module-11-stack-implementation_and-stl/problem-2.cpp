#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1, s2;

    int n;
    cin >> n;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s1.push(x);
    }

    // move elements to second stack
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    // print from second stack
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}