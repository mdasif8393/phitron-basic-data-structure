#include <bits/stdc++.h>
using namespace std;

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
    myQueue q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}