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

int main()
{
    myStack st1;
    myStack st2;

    //* input stack from user
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (n1 != n2)
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;

    while (n1--)
    {
        if (st1.top() != st2.top())
        {
            flag = false;
            break;
        }

        st1.pop();
        st2.pop();
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}