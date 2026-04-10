#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    //* push
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        };

        tail->next = newnode;
        tail = newnode;
    };

    //* pop
    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;

        if (head == NULL)
        {
            tail = NULL;
        }
    };

    //* front
    int front()
    {
        return head->val;
    }

    //* back
    int back()
    {
        return tail->val;
    }

    //* size
    int size()
    {
        return sz;
    }

    //* empty
    bool empty()
    {
        return head == NULL;
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