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

void add_to_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    Node *temp = head;

    if (temp == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
};

void max_value(Node *&head)
{
    Node *temp = head;
    int max = INT_MIN;

    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        temp = temp->next;
    };
    cout << max;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        add_to_tail(head, tail, val);
    }

    max_value(head);

    return 0;
}