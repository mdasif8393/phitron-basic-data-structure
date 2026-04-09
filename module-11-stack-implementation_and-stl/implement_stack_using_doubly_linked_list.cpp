#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    // pop
    void pop()
    {
        sz--;
        Node *deletenode = tail;

        tail = tail->prev;
        delete deletenode;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    };

    // top
    int top()
    {
        return tail->val;
    };

    // size
    int size()
    {
        return sz;
    };

    // empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    MyStack st;

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