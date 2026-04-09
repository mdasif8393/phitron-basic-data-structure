#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l;

    // push
    void push(int val)
    {
        l.push_back(val);
    }

    // pop
    void pop()
    {
        l.pop_back();
    };

    // top
    int top()
    {
        return l.back();
    };

    // size
    int size()
    {
        return l.size();
    };

    // empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MyStack l;

    l.push(10);
    l.push(20);

    if (!l.empty())
        cout << l.top();

    return 0;
}