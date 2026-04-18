//* Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-ii

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    queue<int> b;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    int flag = 1;

    if (a.size() != b.size())
    {
        cout << "NO";
        return 0;
    }
    else
    {

        while (!a.empty())
        {
            if (a.top() != b.front())
            {
                flag = 0;
            }
            a.pop();
            b.pop();
        }
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}