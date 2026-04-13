#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;

    int n;
    cin >> n;

    //* Get input
    while (n--)
    {
        int val;
        cin >> val;

        q.push(val);
    }

    stack<int> s;

    //* copy q in stack s
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    queue<int> q2;

    //* copy s to q2
    while (!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << endl;
        q2.pop();
    }

    return 0;
}