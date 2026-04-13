#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;

        q.push(val);
    }

    stack<int> s;

    int m;
    cin >> m;

    while (m--)
    {
        int val;
        cin >> val;

        s.push(val);
    }

    if (s.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    string flag = "YES";

    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            flag = "NO";
            break;
        }
        s.pop();
        q.pop();
    }

    cout << flag;

    return 0;
}