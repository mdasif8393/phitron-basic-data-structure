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
    myStack st;

    //* input stack from user
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    //* Show Output
    while (!st.empty()) // loop continue when stack is not empty
    {
        cout << st.top() << endl; // print top
        st.pop();                 // delete top value
    }

    return 0;
}