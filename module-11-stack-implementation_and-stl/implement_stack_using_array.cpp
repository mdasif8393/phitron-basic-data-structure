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

    return 0;
}