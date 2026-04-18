//* Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-4

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    // implement stack using vector
    vector<int> v;

    //* make stack push methods using vector STL
    void push(int val)
    {
        v.push_back(val);
    };

    //* make stack pop method using vector pop_back stl
    void pop()
    {
        v.pop_back();
    };

    //* make stack top method to access top element of stack
    int top()
    {
        return v.back();
    }

    //* make stack size method to get stack size
    int size()
    {
        return v.size();
    }

    //* make stack empty method
    bool empty()
    {
        return v.empty();
    };
};

class myQueue
{
public:
    list<int> l;

    //* push
    void push(int val)
    {
        l.push_back(val);
    };

    //* pop
    void pop()
    {
        l.pop_front();
    };

    //* front
    int front()
    {
        return l.front();
    }

    //* back
    int back()
    {
        return l.back();
    }

    //* size
    int size()
    {
        return l.size();
    }

    //* empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    myQueue q;

    //* input stack from user
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    int flag = 1;

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    else
    {

        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = 0;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}