//* Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/is-it-valid-1-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}